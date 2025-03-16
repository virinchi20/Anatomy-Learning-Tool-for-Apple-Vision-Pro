using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.InputSystem.LowLevel;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class ButtonClick : MonoBehaviour
{
    [SerializeField] private TextMeshPro message;

    void OnEnable()
    {
        // enable enhanced touch support to use active touches for properly pooling input phases
        EnhancedTouchSupport.Enable();
    }
    void Update()
    {
        Debug.Log("BUTTON CLICK : UPDATE() INVOKED");
        var activeTouches = Touch.activeTouches;
        if (activeTouches.Count > 0)
        {
            foreach (var touch in Touch.activeTouches)
            {
                if(touch.phase == TouchPhase.Began)
                {
                    SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                    if(touchData.targetObject == gameObject)
                    {
                        Press();
                        break;
                    }

                }
            }
            
        }
    }

    

    public void Press()
    { 
        message.text = "Hello";
    }

}

