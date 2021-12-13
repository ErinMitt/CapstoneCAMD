// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
namespace Microsoft.MixedReality.Toolkit{
    ///<summary>
    /// This class exists to route <see cref="Microsoft.MixedReality.Toolkit.UI.PressableButton"/> events through to <see cref="Microsoft.MixedReality.Toolkit.UI.Interactable"/>.
    /// The result is being able to have physical touch call Interactable.OnPointerClicked.
    ///</summary>
    [AddComponentMenu("Scripts/MRTK/SDK/PhysicalPressEventRouter")]
    public class PhysicalPressEventRouter : MonoBehaviour
    {
       // public GameObject close;
        public GameObject open;
        public GameObject open2;
       // GameObject currentScene;
        //  public GameObject store;
        //menu.GetComponent<Collided>().onHit();
        [Tooltip("Interactable to which the press events are being routed. Defaults to the object of the component.")]
        public Interactable routingTarget;
        void QuestionFailed(GameObject inactive)
        {
            //find component button and make it inactive
            GameObject LocationsScreen= GameObject.Find("Locations Screen");
            GameObject invisibleChild;
            //GameObject possibleComponents = LocationsScreen.GetComponentsInChildren();
          /*  foreach (Transform child in LocationsScreen)
            {
              /*  Debug.Log(t.name());
                if (t.name() == inactive.name())
                {
                    t.active = false;
                }
            }*/
             /*Transform[] ts = gameObject.GetComponentsInChildren<Transform>();
             if (ts == null)
             return gs;
             foreach (Transform t in ts) {
             if (t != null && t.gameobject != null)
             gs.Add(t.gameobject);
             }*/

            StartCoroutine(waiter());
        }
        void Start()
        {
           /* while (forever)
            {
                StartCoroutine(waiter());
                //add health
            }*/
        }

        IEnumerator waiter()
        {
            yield return new WaitForSeconds(20);
            Debug.Log("waited 20 seconds");
        }
        /// Enum specifying which button event causes a Click to be raised.
        public enum PhysicalPressEventBehavior
        {
            EventOnClickCompletion = 0,
            EventOnPress,
            EventOnTouch
        }
        public PhysicalPressEventBehavior InteractableOnClick = PhysicalPressEventBehavior.EventOnClickCompletion;

        private void Awake()
        {
            if (routingTarget == null)
            {
                routingTarget = GetComponent<Interactable>();
            }
            Debug.Log("logs work");

        }

        private bool CanRouteInput()
        {
            return routingTarget != null && routingTarget.IsEnabled;
        }

        /// <summary>
        /// Gets called when the TouchBegin event is invoked within the default PressableButton and 
        /// PressableButtonHoloLens2 components. When the physical touch with a 
        /// hand has begun, set physical touch state within Interactable. 
        /// </summary>
        public void OnHandPressTouched()
        {
            open.active = true;
            transform.parent.gameObject.active = false;
            open2.active = true;
            if(open.name == "Wrong")
            {
                QuestionFailed(transform.parent.gameObject);
            }

            
          //  currentScene = open;
            if (CanRouteInput())
            {
                routingTarget.HasPhysicalTouch = true;
                if (InteractableOnClick == PhysicalPressEventBehavior.EventOnTouch)
                {
                    routingTarget.HasPress = true;
                    routingTarget.TriggerOnClick();
                    routingTarget.HasPress = false;
                }
            }
            UnityEngine.Debug.Log("exited");
        }

        /// <summary>
        /// Gets called when the TouchEnd event is invoked within the default PressableButton and 
        /// PressableButtonHoloLens2 components. Once the physical touch with a hand is removed, set
        /// the physical touch and possibly press state within Interactable.
        /// </summary>
        public void OnHandPressUntouched()
        {
            if (CanRouteInput())
            {
                routingTarget.HasPhysicalTouch = false;
                if (InteractableOnClick == PhysicalPressEventBehavior.EventOnTouch)
                {
                    routingTarget.HasPress = true;
                    UnityEngine.Debug.Log("Button Pressed");
                }
            }
        }

        /// <summary>
        /// Gets called when the ButtonPressed event is invoked within the default PressableButton and 
        /// PressableButtonHoloLens2 components. When the physical press with a hand is triggered, set 
        /// the physical touch and press state within Interactable. 
        /// </summary>
        public void OnHandPressTriggered()
        {
            if (CanRouteInput())
            {
                routingTarget.HasPhysicalTouch = true;
                routingTarget.HasPress = true;
                if (InteractableOnClick == PhysicalPressEventBehavior.EventOnPress)
                {
                    routingTarget.TriggerOnClick();
                }
            }
        }

        /// <summary>
        /// Gets called when the ButtonReleased event is invoked within the default PressableButton and 
        /// PressableButtonHoloLens2 components.  Once the physical press with a hand is completed, set
        /// the press and physical touch states within Interactable
        /// </summary>
        public void OnHandPressCompleted()
        {
            if (CanRouteInput())
            {
                routingTarget.HasPhysicalTouch = true;
                routingTarget.HasPress = true;
                if (InteractableOnClick == PhysicalPressEventBehavior.EventOnClickCompletion)
                {
                    routingTarget.TriggerOnClick();
                }
                routingTarget.HasPress = false;
                routingTarget.HasPhysicalTouch = false;
            }
        }
    }
}