using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class Collided : MonoBehaviour
{
    public GameObject Marino;
    public GameObject Centennial;
    public GameObject curry;
    public GameObject ruggles;
    public GameObject money;
    public GameObject snell;
    [SerializeField]
    [FormerlySerializedAs("collider")]
    [Tooltip("BoxCollider used to calculate bounds and local center, if not set before runtime the gameObjects's BoxCollider will be used by default")]
    private Collider m_ObjectCollider;
    //Fetch the GameObject's Collider (make sure they have a Collider component)
    void Start(){ 
    m_ObjectCollider = GetComponent<Collider>();
        //Here the GameObject's Collider is not a trigger
        //m_ObjectCollider.isTrigger = false;
        //Output whether the Collider is a trigger type Collider or not
    //    Debug.Log("Trigger On : " + m_ObjectCollider.isTrigger);
    }

    private void OnHit()
    {
        Debug.Log("triggered!");
    }
    void OnClick()
{
    //GameObject's Collider is now a trigger Collider when the GameObject is clicked. It now acts as a trigger
    m_ObjectCollider.isTrigger = true;
    //Output to console the GameObject’s trigger state
    Debug.Log("Trigger On : " + m_ObjectCollider.isTrigger);
}
public void OnCollisionEnter(Collision collision)
    {
        Debug.Log("Collided");
        //Check for a match with the specified name on any GameObject that collides with your GameObject
        if (collision.gameObject.name == "MyGameObjectName")
        {
            //If the GameObject's name matches the one you suggest, output this message in the console
            Debug.Log("Do something here");
        }

        //Check for a match with the specific tag on any GameObject that collides with your GameObject
        if (collision.gameObject.tag == "MyGameObjectTag")
        {
            //If the GameObject has the same tag as specified, output this message in the console
            Debug.Log("Do something else here");
        }
    }
}
