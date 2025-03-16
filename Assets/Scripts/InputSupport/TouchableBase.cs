using System;
using System.Collections.Generic;
using UnityEngine;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.InputSystem.LowLevel;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

namespace InputSupport
{
    /// <summary>
    /// Base class for touchable objects. Inherit from this class to easily create touchable objects.
    /// </summary>
    public abstract class TouchableBase : MonoBehaviour
    {
        [SerializeField] protected bool enableDebugLogs = false;
        
        protected virtual void Awake()
        {
            // Child classes can override this if needed
        }
        
        protected virtual void OnEnable()
        {
            // Enable enhanced touch support
            EnhancedTouchSupport.Enable();
            
            if (enableDebugLogs)
                Debug.Log($"[TouchableBase] Enabled for {gameObject.name}");
        }
        
        protected virtual void Update()
        {
            if (enableDebugLogs)
                Debug.Log($"[TouchableBase] Update for {gameObject.name}");
                
            var activeTouches = Touch.activeTouches;
            if (activeTouches.Count <= 0) return;
            
            foreach (var touch in Touch.activeTouches)
            {
                if (touch.phase == TouchPhase.Began)
                {
                    SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                    if (touchData.targetObject == gameObject)
                    {
                        if (enableDebugLogs)
                            Debug.Log($"[TouchableBase] Touch detected on {gameObject.name}");
                            
                        OnTouch();
                        break;
                    }
                }
            }
        }
        
        protected virtual void OnDisable()
        {
            // We don't disable EnhancedTouchSupport here because other objects might be using it
            
            if (enableDebugLogs)
                Debug.Log($"[TouchableBase] Disabled for {gameObject.name}");
        }
        
        /// <summary>
        /// Override this method to handle touch events
        /// </summary>
        protected abstract void OnTouch();
    }
}