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
            var primaryTouchData = EnhancedSpatialPointerSupport.GetPointerState(activeTouches[0]);
            if (activeTouches[0].phase == TouchPhase.Began)
            {
                if (primaryTouchData.Kind == SpatialPointerKind.IndirectPinch || primaryTouchData.Kind == SpatialPointerKind.Touch)
                {
                    Press();
                }
            }
        }
    }
    public void Press()
    { 
        text.text = "Hello";
    }

}

