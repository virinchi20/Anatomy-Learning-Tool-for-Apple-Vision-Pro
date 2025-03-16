using UnityEngine;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.InputSystem.LowLevel;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;

namespace InputSupport
{
    /// <summary>
    /// Base class for making objects draggable. Inherit from this class to create draggable objects.
    /// </summary>
    public abstract class DraggableBase : MonoBehaviour
    {
        [SerializeField] protected bool enableDebugLogs = false;
        
        protected GameObject selectedObject;
        protected Vector3 lastPosition;
        protected bool isDragging = false;
        
        protected virtual void OnEnable()
        {
            // Enable enhanced touch support
            EnhancedTouchSupport.Enable();
            
            if (enableDebugLogs)
                Debug.Log($"[DraggableBase] Enabled for {gameObject.name}");
        }
        
        protected virtual void Update()
        {
            ProcessTouches();
            
            // Reset selected object if no touches are active
            if (Touch.activeTouches.Count is 0 && selectedObject is not null)
            {
                if (isDragging)
                {
                    OnDragEnd(selectedObject);
                    isDragging = false;
                }
                selectedObject = null;
            }
        }
        
        protected virtual void ProcessTouches()
        {
            if (Touch.activeTouches.Count <= 0) return;
            
            foreach (var touch in Touch.activeTouches)
            {
                SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                
                // Process touch based on phase
                switch (touch.phase)
                {
                    case TouchPhase.Began:
                        HandleTouchBegan(touchData);
                        break;
                    case TouchPhase.Moved:
                        HandleTouchMoved(touchData);
                        break;
                    case TouchPhase.Ended:
                    case TouchPhase.Canceled:
                        HandleTouchEnded(touchData);
                        break;
                }
            }
        }
        
        protected virtual void HandleTouchBegan(SpatialPointerState touchData)
        {
            if (touchData.targetObject is null) return;
            
            // Check if the object should be draggable
            if (IsDraggableObject(touchData.targetObject))
            {
                selectedObject = touchData.targetObject;
                lastPosition = touchData.interactionPosition;
                isDragging = true;
                
                // Notify derived classes that dragging started
                OnDragStart(selectedObject, lastPosition);
                
                if (enableDebugLogs)
                    Debug.Log($"[DraggableBase] Started dragging {selectedObject.name}");
            }
        }
        
        protected virtual void HandleTouchMoved(SpatialPointerState touchData)
        {
            if (selectedObject is null || !isDragging) return;
            
            Vector3 currentPosition = touchData.interactionPosition;
            Vector3 deltaPosition = currentPosition - lastPosition;
            
            // Notify derived classes about the drag
            OnDrag(selectedObject, deltaPosition, currentPosition);
            
            // Update the last position
            lastPosition = currentPosition;
        }
        
        protected virtual void HandleTouchEnded(SpatialPointerState touchData)
        {
            if (selectedObject is null || !isDragging) return;
            
            // Notify derived classes that dragging ended
            OnDragEnd(selectedObject);
            
            isDragging = false;
            selectedObject = null;
            
            if (enableDebugLogs)
                Debug.Log($"[DraggableBase] Ended dragging");
        }
        
        /// <summary>
        /// Override this to determine which objects can be dragged
        /// </summary>
        /// <param name="obj">The GameObject to check</param>
        /// <returns>True if the object can be dragged, false otherwise</returns>
        protected virtual bool IsDraggableObject(GameObject obj)
        {
            // By default, all objects are draggable
            return true;
        }
        
        /// <summary>
        /// Called when dragging starts for an object
        /// </summary>
        /// <param name="obj">The GameObject being dragged</param>
        /// <param name="position">The starting position</param>
        protected virtual void OnDragStart(GameObject obj, Vector3 position) { }
        
        /// <summary>
        /// Called during dragging with the drag delta
        /// </summary>
        /// <param name="obj">The GameObject being dragged</param>
        /// <param name="delta">The change in position</param>
        /// <param name="currentPosition">The current touch position</param>
        protected abstract void OnDrag(GameObject obj, Vector3 delta, Vector3 currentPosition);
        
        /// <summary>
        /// Called when dragging ends
        /// </summary>
        /// <param name="obj">The GameObject that was being dragged</param>
        protected virtual void OnDragEnd(GameObject obj) { }
        
        protected virtual void OnDisable()
        {
            // We don't disable EnhancedTouchSupport here because other objects might be using it
            
            if (enableDebugLogs)
                Debug.Log($"[DraggableBase] Disabled for {gameObject.name}");
        }
    }
}