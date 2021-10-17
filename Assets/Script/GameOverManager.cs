using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameOverManager : MonoBehaviour
{
    [SerializeField]
    private Text scoreText;
    [SerializeField]
    private Text highScoreText;

    public Text newRecordText;

    public List<GameObject> symbols = new List<GameObject>();
    

    // Start is called before the first frame update
    void Start()
    {
        scoreText.text =  "<size=90>" + "CHANGE " + "</size>" + GameManager.score;
        highScoreText.text = "<size=70>" + "BEST " + "</size>" + GameManager.highScore;

        if(GameManager.isHighScored){
            newRecordText.gameObject.SetActive(true);
        }
        
             if(Player.symbolLevel==1)symbols[0].SetActive(true);
        else if(Player.symbolLevel==2)symbols[1].SetActive(true);
        else if(Player.symbolLevel==3)symbols[2].SetActive(true);
        else if(Player.symbolLevel==4)symbols[3].SetActive(true);
        else if(Player.symbolLevel==5)symbols[4].SetActive(true);
        else if(Player.symbolLevel==6)symbols[5].SetActive(true);
        else if(Player.symbolLevel==7)symbols[6].SetActive(true);
        else if(Player.symbolLevel==8)symbols[7].SetActive(true);
        
        GameManager.isHighScored = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
