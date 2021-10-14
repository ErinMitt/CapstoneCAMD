// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using UnityEngine;
using UnityEngine.XR.OpenXR;

namespace Microsoft.MixedReality.OpenXR
{
    internal static class InternalMeshSettings
    {
        private const string SceneUnderstandingExtension = "XR_MSFT_scene_understanding_preview3";
        private static readonly NativeLibToken NativeLibToken = NativeLibToken.HoloLens;
        private static readonly bool IsSceneUnderstandingExtensionEnabled = false;

        static InternalMeshSettings()
        {
            IsSceneUnderstandingExtensionEnabled = OpenXRRuntime.IsExtensionEnabled(SceneUnderstandingExtension);
        }

        /// <summary>
        /// Change the settings for future meshes given by the OpenXR XRMeshSubsystem.
        /// </summary>
        public static bool TrySetMeshComputeSettings(MeshComputeSettings settings)
        {
            if (!IsSceneUnderstandingExtensionEnabled)
            {
                Debug.LogWarning($"OpenXR mesh settings are not supported; missing OpenXR extension {SceneUnderstandingExtension}");
                return false;
            }

            NativeLib.SetMeshComputeSettings(NativeLibToken, settings);
            return true;
        }
    }
}
