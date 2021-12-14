using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class monsterDeadCount : MonoBehaviour
{
    public static int monstersDead=0;

    public int MonstersKilled()
    {
        monstersDead=monstersDead+1;
        return monstersDead;
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
