using UnityEngine;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;
using UnityEngine.InputSystem.LowLevel;


public class DragObject : MonoBehaviour
{
    [SerializeField] private GameObject selectedObject;
    [SerializeField] private Vector3 lastPosition;
    void OnEnable()
    {
        EnhancedTouchSupport.Enable();
    }

    // Update is called once per frame
    void Update()
    {
        if(Touch.activeTouches.Count > 0)
        {
            foreach(var touch in Touch.activeTouches)
            {
                SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                if (touchData.targetObject is not null && touchData.Kind is not SpatialPointerKind.Touch)
                {
                    if (touch.phase is TouchPhase.Began)
                    {
                        selectedObject = touchData.targetObject;
                        lastPosition = touchData.interactionPosition;
                    } else if (touch.phase is TouchPhase.Moved && selectedObject is not null)
                    {
                        Vector3 deltaPosition = touchData.interactionPosition - lastPosition;
                        selectedObject.transform.position += deltaPosition;
                        lastPosition = touchData.interactionPosition;
                    }
                }
            }
        }

        if (Touch.activeTouches.Count is 0)
        {
            selectedObject = null;
        }
    }

    
}