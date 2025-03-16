using UnityEngine;

namespace InputSupport
{
    public class SimpleDragger : DraggableBase
    {
        [SerializeField] private bool restrictToDraggableTags = false;
        [SerializeField] private string[] draggableTags = { "Draggable" };
    
        protected override bool IsDraggableObject(GameObject obj)
        {
            // If restriction is enabled, check if the object has one of the draggable tags
            if (restrictToDraggableTags)
            {
                foreach (string tag in draggableTags)
                {
                    if (obj.CompareTag(tag))
                        return true;
                }
                return false;
            }
        
            // By default, all objects are draggable
            return true;
        }
    
        protected override void OnDrag(GameObject obj, Vector3 delta, Vector3 currentPosition)
        {
            // Simply move the object by the drag delta
            obj.transform.position += delta;
        }
    }
}