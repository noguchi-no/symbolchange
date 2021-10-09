using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverManager : MonoBehaviour
{
    [SerializeField]
    private Text scoreText;

    public List<GameObject> symbols = new List<GameObject>();
    

    // Start is called before the first frame update
    void Start()
    {
        scoreText.GetComponent<Text>().text =  "<size=90>" + "CHANGE " + "</size>" + GameManager.score;
        /*
             if(Player.currentGetSymbolList[0])symbols[0].SetActive(true);
        else if(Player.currentGetSymbolList[1])symbols[1].SetActive(true);
        else if(Player.currentGetSymbolList[2])symbols[2].SetActive(true);
        else if(Player.currentGetSymbolList[3])symbols[3].SetActive(true);
        else if(Player.currentGetSymbolList[4])symbols[4].SetActive(true);
        else if(Player.currentGetSymbolList[5])symbols[5].SetActive(true);
        else if(Player.currentGetSymbolList[6])symbols[6].SetActive(true);
        */
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
