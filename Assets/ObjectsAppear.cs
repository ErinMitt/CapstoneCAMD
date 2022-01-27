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
    void Update()
    {
        Debug.Log(gameObject.transform.parent.position);
        Debug.Log(gameObject.transform.parent.name);
        if (gameObject.transform.parent.position != Vector3.zero && gameObject.transform.parent.name == "ImageTarget S(4)")
        {
            monster.SetActive(true);
        }
        if (gameObject.transform.parent.position != Vector3.zero && gameObject.transform.parent.name == "ImageTarget (3)")
        {
            monster.SetActive(true);
        }
    }
}
