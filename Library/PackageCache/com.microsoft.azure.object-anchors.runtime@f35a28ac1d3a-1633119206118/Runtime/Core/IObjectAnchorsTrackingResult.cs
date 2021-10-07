// --------------------------------------------------------------------------------------------------------------------
// <copyright company="Microsoft">
//   Copyright (c) Microsoft Corporation.  All rights reserved.
// </copyright>
// --------------------------------------------------------------------------------------------------------------------
#if UNITY_WSA
using System;
using UnityEngine;

namespace Microsoft.Azure.ObjectAnchors.Unity
{
    public interface IObjectAnchorsTrackingResult
    {
        /// <summary>
        /// Instance location in the world.
        /// </summary>
        ObjectAnchorsLocation? Location { get; }

        /// <summary>
        /// Scale changes applied to the object model in centered coordinate system.
        /// </summary>
        Vector3 ScaleChange { get; }

        /// <summary>
        /// Unique id for the object model that represents this object instance.
        /// </summary>
        Guid ModelId { get; }

        /// <summary>
        /// Unique id for an object instance.
        /// </summary>
        Guid InstanceId { get; }

        /// <summary>
        /// Percentage of surface on object model that matches to real object at current pose, from 0 to 1.
        /// </summary>
        float SurfaceCoverage { get; }

        /// <summary>
        /// The most recent time when an instance is updated in UTC.
        /// </summary>
        DateTime LastUpdatedTime { get; }

        /// <summary>
        /// An instance's tracking mode.
        /// </summary>
        ObjectInstanceTrackingMode TrackingMode { get; }
    }
}
#endif // UNITY_WSA
