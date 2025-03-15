using System;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Unity.Polyspatial.InputDevices;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.EnhancedTouch;
using UnityEngine.InputSystem.LowLevel;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;

public class ButtonClick : MonoBehaviour
{
    public TextMeshPro text;

    void OnEnable()
    {
        // enable enhanced touch support to use active touches for properly pooling input phases
        EnhancedTouchSupport.Enable();
    }
    void Update()
    {
        var activeTouches = Touch.activeTouches;
        if (activeTouches.Count > 0)
        {
            foreach (var touch in Touch.activeTouches)
            {
                if(touch.phase == touchPhase.Began)
                {
                    SpatialPointerState touchData = EnhancedSpatialPointerSupport.GetPointerState(touch);
                    if(touchData.targetObject == gameObject)
                    {
                        Press();
                    }

                }
            }
            
        }
    }
    public void Press()
    { 
        text.text = "Hello";
    }

}

