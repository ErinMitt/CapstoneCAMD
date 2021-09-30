using System;
using System.Runtime.InteropServices;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

namespace Microsoft.Azure.SpatialAnchors.Unity.ARFoundation
{
    public class UnityARFoundationAnchorComponent : MonoBehaviour
    {
        /// <summary>
        /// Gets the world anchor.
        /// </summary>
        public ARAnchor WorldAnchor { get; private set; }

        /// <summary>
        /// Gets the world anchor handle.
        /// </summary>
        public IntPtr WorldAnchorHandle => this.WorldAnchor.nativePtr.GetPlatformPointer();

        /// <summary>
        /// Gets the world anchor identifier.
        /// </summary>
        public string WorldAnchorIdentifier => Marshal.PtrToStringAuto(this.WorldAnchorHandle);

        /// <summary>
        /// Awake is called when the script instance is being loaded.
        /// </summary>
        private void Awake()
        {
            this.WorldAnchor = AnchorHelpers.CreateWorldAnchor(this.gameObject.transform);
#if (UNITY_WSA || WINDOWS_UWP) && !MIXED_REALITY_OPENXR
            this.gameObject.transform.SetPositionAndRotation(Vector3.zero, Quaternion.identity);
#endif
            this.gameObject.transform.SetParent(this.WorldAnchor.transform, true);
        }

        /// <summary>
        /// Destroying the attached Behaviour will result in the game or Scene
        /// receiving OnDestroy.
        /// </summary>
        private void OnDestroy()
        {
            if (this.WorldAnchor != null)
            {
                SpatialAnchorManager.arAnchorManager.RemoveAnchor(this.WorldAnchor);
                this.WorldAnchor = null;
            }
        }
    }
}
