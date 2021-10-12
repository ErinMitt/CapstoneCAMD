using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class triggered : MonoBehaviour
{
    // Start is called before the first frame update
    double startPos;
    void Start()
    {

        Debug.Log(transform.position.z);
        startPos = transform.position.z;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(transform.position.z-startPos);
        if(transform.position.z - startPos > .0016 && transform.position.z - startPos <.00161)
        {
            Debug.Log("Button selected");
        }
    }
}
