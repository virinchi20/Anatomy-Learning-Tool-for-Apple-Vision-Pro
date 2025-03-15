using UnityEngine;
using TMPro;
using Unity.PolySpatial.InputDevices;
using UnityEngine.InputSystem.EnhancedTouch;
using Touch = UnityEngine.InputSystem.EnhancedTouch.Touch;
using TouchPhase = UnityEngine.InputSystem.TouchPhase;



public class HubButton : MonoBehaviour
{
    public TextMeshPro text;


    void OnPress()
    {
        text.text = "Hello";
    }


}
