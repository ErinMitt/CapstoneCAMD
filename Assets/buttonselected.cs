using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class buttonselected : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        if (transform.position.z == .004)
        {
            Debug.Log("hi");
        }
    }

    // Update is called once per frame
    void Update()
    {
      if(transform.position.z==.004)
        {
            Debug.Log("hi");
        } 
    }
}
