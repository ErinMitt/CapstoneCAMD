using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectsAppear : MonoBehaviour
{
    public GameObject level1;
    public GameObject level2;
    public GameObject level3;
    public GameObject level4;
    public GameObject mainCameraDeadCount;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    public void TargetActive()
    {
        int levelsComplete = mainCameraDeadCount.GetComponent<monsterDeadCount>().LevelsComplete();
        switch (levelsComplete)
        {
            case 0:
                level1.SetActive(true);
                level1.transform.position = new Vector3(gameObject.transform.parent.localPosition.x, gameObject.transform.parent.localPosition.y, gameObject.transform.parent.localPosition.z + 1.0f);
                break;
            case 1:
                level2.SetActive(true);
                level2.transform.position = new Vector3(gameObject.transform.parent.localPosition.x, gameObject.transform.parent.localPosition.y, gameObject.transform.parent.localPosition.z + 1.0f);
                break;
            case 2:
                level3.SetActive(true);
                level3.transform.position = new Vector3(gameObject.transform.parent.localPosition.x, gameObject.transform.parent.localPosition.y, gameObject.transform.parent.localPosition.z + 1.0f);
                break;
            case 3:
                level4.SetActive(true);
                level4.transform.position = new Vector3(gameObject.transform.parent.localPosition.x, gameObject.transform.parent.localPosition.y, gameObject.transform.parent.localPosition.z + 1.0f);
                break;

        }
        gameObject.SetActive(false);


      //  }
    }
}
