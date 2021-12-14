using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class monsterFight : MonoBehaviour
{
    public GameObject healthBar;
    [SerializeField]
    [FormerlySerializedAs("collider")]
    [Tooltip("BoxCollider used to calculate bounds and local center, if not set before runtime the gameObjects's BoxCollider will be used by default")]
    private Collider m_ObjectCollider;
    //Fetch the GameObject's Collider (make sure they have a Collider component)
    double count=0;
    double countPlay = 0;
    public GameObject courses;
    public Animator anim;
    private int animLayer=0;
    public GameObject playerHealth;
    int attackCount = 0;
    int attackCount2 = 0;
    public GameObject NoMoreHealth;
    public GameObject GameWon;
    public GameObject firstAid;
    private IEnumerator coroutine;
    private IEnumerator coroutine2;
    public GameObject mainCameraDeadCount;

    void Start()
    {
        Debug.Log("Base: " + anim.GetLayerIndex("Base Layer"));
        m_ObjectCollider = GetComponent<Collider>();
        //Here the GameObject's Collider is not a trigger
        //m_ObjectCollider.isTrigger = false;
        //Output whether the Collider is a trigger type Collider or not
        Debug.Log("Trigger On : " + m_ObjectCollider.isTrigger);

    }
    void FixedUpdate()
    {
        if (anim.GetCurrentAnimatorStateInfo(animLayer).IsName("Attack01")){
            attackCount++;
        }
        if (anim.GetCurrentAnimatorStateInfo(animLayer).IsName("Attack01") && attackCount%100==0)
        {
            PlayerHealth();
        }
        if (anim.GetCurrentAnimatorStateInfo(animLayer).IsName("Attack02"))
        {
            attackCount2++;
        }
        if (anim.GetCurrentAnimatorStateInfo(animLayer).IsName("Attack02") && attackCount2 % 50 == 0)
        {
            PlayerHealth();
        }

    }

    public void PlayerHealth()
    {
        float initxVal = playerHealth.transform.localScale.x;
        countPlay++;
        double multvalcount = 20 - countPlay;
        float multVal = initxVal * (float)(multvalcount / (multvalcount + 1));
        if (multvalcount < 0)
        {//neeed to call a corotine in other script
            gameObject.active = false;
            NoMoreHealth.active = true;
            coroutine = sendMessage(10.0f);
            StartCoroutine(coroutine);
            coroutine2 = WaitAndPrint(60.0f);
            StartCoroutine(coroutine2);
        }
        else
        {
            playerHealth.transform.localScale = new Vector3(multVal, playerHealth.transform.localScale.y, playerHealth.transform.localScale.z);
            playerHealth.transform.localPosition = new Vector3(-.005f * (float)countPlay, 0, -.001f);
        }
   
    }
    public void OnTriggerEnter()
    {
        float initxVal = healthBar.transform.localScale.x;
        count++;
        double multvalcount = 5 - count;
        float multVal = initxVal * (float)(multvalcount / (multvalcount + 1));
        healthBar.transform.localScale = new Vector3(multVal, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
        healthBar.transform.localPosition = new Vector3(-.02f * (float)count, 0, -.001f);
        Debug.Log("triggered! and entered");
        if (count == 5)
        {
            gameObject.active = false;
           // mainCameraDeadCount.GetComponent<monsterDeadCount>().MonstersKilled();
            int monsterDead = mainCameraDeadCount.GetComponent<monsterDeadCount>().MonstersKilled();//mainCameraDeadCount.GetComponent<monsterDeadCount>().monstersDead;
            Debug.Log("reached courses" + monsterDead);
            float newVal = .04f*(float)monsterDead;
            float initxValCourse = healthBar.transform.localScale.x;
            courses.transform.localScale = new Vector3(newVal, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
            courses.transform.localPosition = new Vector3(healthBar.transform.localPosition.x + .02f, healthBar.transform.localPosition.y, healthBar.transform.localPosition.z);
            if (monsterDead==5)
            {
                GameWon.active = true;
                Debug.Log("game won");
            }
        }
    }
    private IEnumerator sendMessage(float waitTime)
    {
        while (true)
        {
            yield return new WaitForSeconds(waitTime);
            NoMoreHealth.active = false;
        }
    }
    private IEnumerator WaitAndPrint(float waitTime)
        {
            while (true)
            {
            yield return new WaitForSeconds(waitTime);
            firstAid.active = true;
        }
        }

 
}
