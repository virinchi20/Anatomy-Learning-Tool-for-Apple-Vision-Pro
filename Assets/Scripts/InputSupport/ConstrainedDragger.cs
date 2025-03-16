using UnityEngine;

namespace InputSupport
{
    public class ConstrainedDragger : DraggableBase
    {
        [SerializeField] private bool constrainX = false;
        [SerializeField] private bool constrainY = false;
        [SerializeField] private bool constrainZ = false;
    
        [SerializeField] private float minX = float.MinValue;
        [SerializeField] private float maxX = float.MaxValue;
        [SerializeField] private float minY = float.MinValue;
        [SerializeField] private float maxY = float.MaxValue;
        [SerializeField] private float minZ = float.MinValue;
        [SerializeField] private float maxZ = float.MaxValue;
    
        [SerializeField] private float dragSpeed = 1.0f;
    
        protected override void OnDrag(GameObject obj, Vector3 delta, Vector3 currentPosition)
        {
            // Apply drag speed
            delta *= dragSpeed;
        
            // Constrain movement to specific axes if needed
            if (constrainX) delta.x = 0;
            if (constrainY) delta.y = 0;
            if (constrainZ) delta.z = 0;
        
            // Move the object
            Vector3 newPosition = obj.transform.position + delta;
        
            // Apply position constraints
            newPosition.x = Mathf.Clamp(newPosition.x, minX, maxX);
            newPosition.y = Mathf.Clamp(newPosition.y, minY, maxY);
            newPosition.z = Mathf.Clamp(newPosition.z, minZ, maxZ);
        
            // Set the final position
            obj.transform.position = newPosition;
        }
    
        protected override void OnDragStart(GameObject obj, Vector3 position)
        {
            base.OnDragStart(obj, position);
        
            // You could add visual feedback or other effects when dragging starts
        }
    
        protected override void OnDragEnd(GameObject obj)
        {
            base.OnDragEnd(obj);
        
            // You could add snapping behavior or other effects when dragging ends
        }
    }
}