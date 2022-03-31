using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class monsterFight : MonoBehaviour
{
    public GameObject healthBar;
    [SerializeField]
    [FormerlySerializedAs("collider")]
    [Tooltip("BoxCollider used to calculate bounds and local center, if not set before runtime the gameObjects's BoxCollider will be used by default")]
    private Collider m_ObjectCollider;
    //Fetch the GameObject's Collider (make sure they have a Collider component)
    double count=0;
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
    public TextMesh healthText;
    float initxVal;
    public AudioClip loseHealth;
    public AudioClip monsterHealth;
    public AudioClip powerup;
    public AudioClip levelWon;
    public AudioClip levelLost;

    void Start()
    {
        initxVal = playerHealth.transform.localScale.x;
        Debug.Log("Base: " + anim.GetLayerIndex("Base Layer"));
        m_ObjectCollider = GetComponent<Collider>();
        //Here the GameObject's Collider is not a trigger
        //m_ObjectCollider.isTrigger = false;
        //Output whether the Collider is a trigger type Collider or not
        Debug.Log("Trigger On : " + m_ObjectCollider.isTrigger);
        StartCoroutine(wait());
       

    }
    IEnumerator wait()
    {
        int r = Random.Range(0, 4);
        Debug.Log(r);
        yield return new WaitForSeconds((float)r);
        
        anim.enabled = true;

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

        double countPlay= mainCameraDeadCount.GetComponent<monsterDeadCount>().playerHealth(-1);
        double multvalcount = 20 - countPlay;
        float multVal = initxVal*(float)multvalcount;
        healthText.text = "Health:" + multvalcount * 5 + "%";
        if (multvalcount <= 0)
        {
            transform.parent.gameObject.active = false;
            NoMoreHealth.active = true;
            mainCameraDeadCount.GetComponent<monsterDeadCount>().levelFailed();
            mainCameraDeadCount.GetComponent<monsterDeadCount>().callCoroutines();

            AudioSource.PlayClipAtPoint(levelLost, transform.position);
        }
        else
        {
            playerHealth.transform.localScale = new Vector3(multVal/20, playerHealth.transform.localScale.y, playerHealth.transform.localScale.z);
            playerHealth.transform.localPosition = new Vector3(multVal/40-.1f, 0, -.001f);
            AudioSource.PlayClipAtPoint(loseHealth, transform.position);
        }
      


    }
    public void OnTriggerEnter()
    {
        AudioSource.PlayClipAtPoint(monsterHealth, transform.position);
        float initxVal = healthBar.transform.localScale.x;
        count++;
        double multvalcount = 4 - count;
        float multVal = initxVal * (float)(multvalcount / (multvalcount + 1));
        healthBar.transform.localScale = new Vector3(multVal, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
        healthBar.transform.localPosition = new Vector3(-.025f * (float)count, 0, -.001f);
        if (count == 4)
        {
            gameObject.SetActive(false);
            int monsterDead = mainCameraDeadCount.GetComponent<monsterDeadCount>().MonstersKilled(true);
           
            bool dead = false;
            Debug.Log("dead monster");
            
            if (mainCameraDeadCount.GetComponent<monsterDeadCount>().currMonsters()> mainCameraDeadCount.GetComponent<monsterDeadCount>().LevelsComplete())
            {
                Debug.Log("level completed");
                AudioSource.PlayClipAtPoint(levelWon, transform.position);
                mainCameraDeadCount.GetComponent<monsterDeadCount>().levelsCompleted();

                monsterDead = mainCameraDeadCount.GetComponent<monsterDeadCount>().MonstersKilled(false);
                float newVal = 0.05f * (float)mainCameraDeadCount.GetComponent<monsterDeadCount>().LevelsComplete();
                float initxValCourse = healthBar.transform.localScale.x;

                double countPlay = mainCameraDeadCount.GetComponent<monsterDeadCount>().playerHealth(mainCameraDeadCount.GetComponent<monsterDeadCount>().LevelsComplete()*2);
                 multvalcount = 20 - countPlay;
                 multVal = initxVal * (float)multvalcount;
                Debug.Log(multvalcount);
                playerHealth.transform.localScale = new Vector3(.2f*((float)multvalcount/ 20), playerHealth.transform.localScale.y, playerHealth.transform.localScale.z);
                playerHealth.transform.localPosition = new Vector3(0.003f-(.1f * ((float)countPlay / 20)), 0, -.001f);
                courses.transform.localScale = new Vector3(newVal, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
                courses.transform.localPosition = new Vector3(healthBar.transform.localPosition.x + newVal / 2.5f, healthBar.transform.localPosition.y, healthBar.transform.localPosition.z);
                healthText.text = "Health:" + multvalcount * 5 + "%";
            }
           
            
            if (mainCameraDeadCount.GetComponent<monsterDeadCount>().LevelsComplete()==4)//need to change to each location completed
            {
                courses.transform.localScale = new Vector3(0, healthBar.transform.localScale.y, healthBar.transform.localScale.z);
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
