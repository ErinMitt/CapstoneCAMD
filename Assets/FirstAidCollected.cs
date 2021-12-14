using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FirstAidCollected : MonoBehaviour
{
    public GameObject firstAid;
    public GameObject healthBar;

    public void clicked()
    {

        firstAid.active = false;
        healthBar.transform.localScale = new Vector3(.205f, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
        healthBar.transform.localPosition = new Vector3(0.003f, 0, -.001f);

    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
