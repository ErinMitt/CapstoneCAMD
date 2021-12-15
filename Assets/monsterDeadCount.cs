using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class monsterDeadCount : MonoBehaviour
{
    public GameObject NoMoreHealth;
    public GameObject firstAid;
    public static int monstersDead=0;

    private IEnumerator coroutine;
    private IEnumerator coroutine2;
    public int MonstersKilled()
    {
        monstersDead=monstersDead+1;
        return monstersDead;
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
}
