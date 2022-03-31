using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class monsterDeadCount : MonoBehaviour
{
    public GameObject NoMoreHealth;
    public GameObject firstAid;
    public GameObject Cylinder;
    public GameObject Sphere;
    public GameObject Cube;
    public GameObject Capsule;
    public GameObject curryCheck;
    public GameObject RugglesCheck;
    public GameObject MarinoCheck;
    public GameObject SnellCheck;
    public bool isCylinder=false;//if it is completed
    public bool isSphere = false;
    public bool isCube = false;
    public bool isCapsule = false;
    double countPlay = 0;

    public static int monstersDead=0;
    int levelsComplete = 0;

    private IEnumerator coroutine;
    private IEnumerator coroutine2;
    public int MonstersKilled(bool isKill)
    {
        if (isKill)
            monstersDead = monstersDead + 1;
        else
            monstersDead = 0;
        return monstersDead;
    }
    public int currMonsters()
    {
        return monstersDead;
    }
    public int LevelsComplete()
    {
        return levelsComplete;
    }
    public double playerHealth(int v)
    {

        countPlay=countPlay-v;
        if (countPlay < 0)
        {
            countPlay = 0;
        }
        return countPlay;
    }
    // Start is called before the first frame update
    public void callCoroutines()
    {
        coroutine = sendMessage(10.0f);
        StartCoroutine(coroutine);
        coroutine2 = WaitAndPrint(60.0f);
        StartCoroutine(coroutine2);
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

    public void levelsCompleted()
    {
         levelsComplete++;
        if (!isCylinder&&Cylinder.active==false)
        {
            curryCheck.SetActive(true);
            isCylinder = true; 
          //  Sphere.GetComponent<ObjectsAppear>().TargetActive();

        }
       else if (!isSphere && Sphere.active == false)
        {
            SnellCheck.SetActive(true);
            isSphere = true;
          //  Cube.GetComponent<ObjectsAppear>().TargetActive();
        }
       else if (!isCube && Cube.active == false)
        {
            MarinoCheck.SetActive(true);
            isCube = true;
          //  Capsule.GetComponent<ObjectsAppear>().TargetActive();

        }
       else if (!isCapsule && Capsule.active == false)
        {
            isCapsule = true;
            RugglesCheck.SetActive(true);
        }
        else
        {
            Debug.Log("failed");
        }
        
    }
    public void levelFailed()
    {
        if (!isCylinder && Cylinder.active == false)
        {
            Cylinder.SetActive(true);
        }
        else if (!isSphere && Sphere.active == false)
        {
            Sphere.SetActive(true);
        }
        else if (!isCube && Cube.active == false)
        {
            Cube.SetActive(true);

        }
        else if (!isCapsule && Capsule.active == false)
        {
            Capsule.SetActive(true);
        }
        else
        {
            Debug.Log("failed2");
        }
    }
}
