using UnityEditor;
using UnityEngine;
namespace MStudio
{
    [InitializeOnLoad]
    public class StyleHierarchy
    {
        static string[] dataArray;
        static string path;
        static ColorPalette colorPalette;

        static StyleHierarchy()
        {
            dataArray = AssetDatabase.FindAssets("t:ColorPalette");
            // Check both for null and length > 0
            if (dataArray != null && dataArray.Length > 0)
            {
                path = AssetDatabase.GUIDToAssetPath(dataArray[0]);
                colorPalette = AssetDatabase.LoadAssetAtPath<ColorPalette>(path);
                if (colorPalette != null)  // Added null check for colorPalette
                {
                    EditorApplication.hierarchyWindowItemOnGUI += OnHierarchyWindow;
                }
            }
        }

        private static void OnHierarchyWindow(int instanceID, Rect selectionRect)
        {
            // Rest of the code remains the same
            UnityEngine.Object instance = EditorUtility.InstanceIDToObject(instanceID);
            if (instance != null && colorPalette != null)  // Added null check for colorPalette
            {
                for (int i = 0; i < colorPalette.colorDesigns.Count; i++)
                {
                    var design = colorPalette.colorDesigns[i];
                    if (instance.name.StartsWith(design.keyChar))
                    {
                        string newName = instance.name.Substring(design.keyChar.Length);
                        EditorGUI.DrawRect(selectionRect, design.backgroundColor);
                        GUIStyle newStyle = new GUIStyle
                        {
                            alignment = design.textAlignment,
                            fontStyle = design.fontStyle,
                            normal = new GUIStyleState()
                            {
                                textColor = design.textColor,
                            }
                        };
                        EditorGUI.LabelField(selectionRect, newName.ToUpper(), newStyle);
                    }
                }
            }
        }
    }
}