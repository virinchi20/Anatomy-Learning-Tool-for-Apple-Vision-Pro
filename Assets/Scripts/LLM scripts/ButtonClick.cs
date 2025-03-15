using UnityEngine;
using TMPro;


public class ButtonClick : MonoBehaviour
{
    public TextMeshPro text;

    void OnPress()
    {
        text.text = "Hello";
    }
  

}
