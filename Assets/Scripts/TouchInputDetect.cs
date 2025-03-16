using UnityEngine;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;
using UnityEngine.InputSystem.LowLevel;


public class TouchInputDetect : MonoBehaviour
{
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
                if(touch.phase == TouchPhase.Began)
                {
                    SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                    if(touchData.targetObject is not null)
                    {
                        ChangeObjectColor(touchData.targetObject);
                        break;
                    }
                }
            }
        }
    }

    void ChangeObjectColor(GameObject obj)
    {
        Renderer objRenderer = obj.GetComponent<Renderer>();
        if(objRenderer is not null)
        {
            objRenderer.material.color = new Color(Random.value, Random.value, Random.value);
        }
    }
}
