using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectsAppear : MonoBehaviour
{
    public GameObject monster;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    public void TargetActive()
    {
       
       // Debug.Log(gameObject.transform.parent.name);
       /* if (gameObject.transform.parent.position != Vector3.zero && gameObject.name == "Cube")
        {
            Debug.Log(gameObject.transform.parent.position);
            monster.SetActive(true);
        }
        if (gameObject.transform.parent.position != Vector3.zero && gameObject.name == "Sphere")
        {*/
            
            monster.SetActive(true);
        monster.transform.position = new Vector3(gameObject.transform.parent.localPosition.x, gameObject.transform.parent.localPosition.y, gameObject.transform.parent.localPosition.z+0.5f);

      //  }
    }
}
