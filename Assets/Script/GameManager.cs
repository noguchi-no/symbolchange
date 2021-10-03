using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] int itemCount;
    
    public List<GameObject> items = new List<GameObject>();
    
    List<Vector2> symbolPosition = new List<Vector2>();

    public static int symbolListCount = 0;

    public List<GameObject> appearItems = new List<GameObject>();

    public GameObject player;
    public Player player2;

    public float lineHight;
    public float lineWidthStartPoint;
    public float distance = 0.5f;
    int countForGenerateHight = 1;
    int stageNum = 1; 
    bool lastSymbol;

    public Text scoreText;
    static public int score;
    bool isSymbolGenerated;
    bool isSymbolDeleted;
    
    // Start is called before the first frame update
    void Awake()
    {
        Time.timeScale = 0f;
    }
    void Start()
    {
        symbolGenerate();
    }    

    void Update()
    {
        if(Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.LeftArrow))
        {
            Time.timeScale = 1f;
        }

        Vector2 playerPos = player.transform.position;

        if(player2.squared){

            if(!isSymbolGenerated){
                symbolGenerate();

                //Debug.Log("generated!!!");
            }
            isSymbolGenerated = true;
        }
        else{
            isSymbolGenerated = false;
        }
        
        /*　シンボルを定期的に消す
        if(playerPos.y > 15 * countForGenerateHight){
            isSymbolDeleted = false;
            if(!isSymbolDeleted){
            symbolDelete();
            countForGenerateHight++;
            }
            isSymbolDeleted = true;

        }*/
        scoreText.text = score.ToString();

    }
    //消し方わからん
    void symbolDelete()
    {
        for(int i = 0; i < 6*2; i++)
        {
            appearItems.RemoveAt(i);
            Destroy(appearItems[i]);
            
        }
        
    }

    void symbolGenerate()
    {   
        //items[]の順番は大切
        Vector2 pos = new Vector2(lineWidthStartPoint,lineHight);
        
        
        for(int j = 0; j <= stageNum+1; j++)
        {
            
            int randomNum = Random.Range(0, 6);
            //左側シンボル
            for (int n = 0; n < randomNum; n++)
            {
                if(j > stageNum){
                    appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
                    
                }
                else{
                    appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
                    
                }
                pos.x += items[symbolListCount].transform.localScale.x + distance;
                
            }
            //1つだけのシンボル
            if(j == stageNum){    
                appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
                
            }

            else if(j > stageNum){
                appearItems.Add(Instantiate(items[0], pos, Quaternion.identity));
            }
                
            else {
                appearItems.Add(Instantiate(items[symbolListCount+1], pos, Quaternion.identity));
                
            }
            
            pos.x += items[symbolListCount].transform.localScale.x + distance;
            
            //右側のシンボル
            for (int i = 0; i < 5 - randomNum; i++)
            {
                if(j > stageNum){
                    appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
                    
                }
                else{
                    appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
                    
                }
                pos.x += items[symbolListCount].transform.localScale.x + distance;

            }

            //おじゃまブロックを生成
            float obstacleX = Random.Range(-2f, 2f);
            float obstacleY = Random.Range(lineHight+2.0f, lineHight+3.0f);

            Vector2 posObstacle = new Vector2(obstacleX,obstacleY);

            if(j > stageNum)appearItems.Add(Instantiate(items[items.Count-1], posObstacle, Quaternion.identity));

            else appearItems.Add(Instantiate(items[symbolListCount], posObstacle, Quaternion.identity));
            
            lineHight += 5.0f;
            //Debug.Log(lineHight);
            pos = new Vector2(lineWidthStartPoint,lineHight);
            symbolListCount++;
            
            //Debug.Log(symbolListCount);
        }
        stageNum++;
        symbolListCount=0;

        if(stageNum == items.Count-1){
            stageNum = 1;
        }
        
        //if(items.Count-1 <= symbolListCount)return;
    }
        /*
        for (int n = 0; n < itemCount; n++)
        {
            // ランダムの位置
            float randomX = Random.Range(-3, 3);
            float randomY = Random.Range(3, 7);
        
            Vector2 pos = new Vector2(randomX,randomY);
            
            {

            float socialDistance = 1f; // 生成物間の距離

                // リスト全体からソーシャルディスタンス内のオブジェクトがいるか探す
                if (symbolPosition.Where(_ => Vector2.Distance(pos, _)  < socialDistance).Any()) 
                {
                    
                    // 密なのでやり直し(continue)、なんとなく１０個は生成したいのでマイナス.１０個作れない状況になったら無限ループになりますので注意
                    n--;
                    continue;
                }

            
            appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
            // 判定に必要あ生成位置をリストに追加
            symbolPosition.Add(pos);

            if(symbolListCount < items.Count-1) symbolListCount++;
            else symbolListCount = 0;

            }

        }
        */
    
}
