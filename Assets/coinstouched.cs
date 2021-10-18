using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coinstouched : MonoBehaviour
{
    public GameObject coins;
    public GameObject cointracker;

    public void clicked()
    {
        TextMesh t = cointracker.GetComponent<TextMesh>();
       // t.text = "new text set";
        
        coins.active = false;
        var CoinSize=t.text.Length;
        string money = t.text.Substring(8, CoinSize-8);
        int moneyVal = int.Parse(money);
        Debug.Log(moneyVal);
        t.text = "Money $"+(moneyVal+10);

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
