using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [SerializeField] int itemCount;
    
    public List<GameObject> items = new List<GameObject>();
    public List<GameObject> obstacles = new List<GameObject>();
    
    List<Vector2> symbolPosition = new List<Vector2>();

    public static int symbolListCount = 0;

    public List<GameObject> appearItems = new List<GameObject>();

    public GameObject player;
    public Player player2;

    public float lineHight;
    public float lineWidthStartPoint;
    public float symbolDistance;
    public float lineDistance;
    public float middleSymbolDistance;
    int countForGenerateHight = 1;
    int stageNum; 
    bool lastSymbol;

    public Text scoreText;
    static public int score;
    bool isSymbolGenerated;
    bool isSymbolDeleted;
    
    public GameObject canvas;

    public static int highScore = 0;

    public static bool isHighScored;

    public float WallObstacleLeftX;
    
    public float WallObstacleRightX;
    
    // Start is called before the first frame update
    void Awake()
    {
        //Time.timeScale = 0f;
        Application.targetFrameRate = 60;
    }
    void Start()
    {
        //PlayerPrefs.DeleteAll();
        symbolGenerate();
        score = 0;
        highScore = PlayerPrefs.GetInt("SCORE", 0);  
    }    

    void Update()
    {   
        
        //PC用
        if(Input.GetKey(KeyCode.RightArrow) || Input.GetKey(KeyCode.LeftArrow))
        {
            canvas.SetActive(false);
        }
        
        //スマホ用
        if(Input.GetMouseButtonDown(0))
        {
            canvas.SetActive(false);
        }

        Vector2 playerPos = player.transform.position;

        //2回目移行、シンボルを円まで一気に生成するタイミング
        if(player2.isPolygon10){

            if(!isSymbolGenerated){
                symbolGenerate();
            }
            isSymbolGenerated = true;
        }
        else{
            isSymbolGenerated = false;
        }
        
        //シンボルを定期的に消す
        if(playerPos.y > 20 * countForGenerateHight){
            
            isSymbolDeleted = false;
            if(!isSymbolDeleted){
                symbolDelete();
                countForGenerateHight++;
            }
            isSymbolDeleted = true;

        }
        scoreText.text = score.ToString();

    }
    
    void symbolDelete()
    {
        for(int i = 0; i < 16; i++)
        {
            Destroy(appearItems[0]);
            appearItems.RemoveAt(0);
        }   
    }
    //円まで一気にシンボルをつくる
    void symbolGenerate()
    {   
        //items[]の順番は大切
        Vector2 pos = new Vector2(lineWidthStartPoint,lineHight);
        
        for(int j = 0; j < items.Count; j++)
        {
            
            int randomNum = Random.Range(0, 6);
            //左側シンボル
            for (int n = 0; n < randomNum; n++)
            {
                if(j == items.Count-1){
                    appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
                }
                else{
                    appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
                    
                }
                pos.x += symbolDistance;
            }
            //1つだけのシンボル
            if(j == items.Count-1){
                appearItems.Add(Instantiate(items[0], pos, Quaternion.identity));
            }
            else{
                appearItems.Add(Instantiate(items[symbolListCount+1], pos, Quaternion.identity));
                
            }
                pos.x += symbolDistance;

            //右側のシンボル
            for (int i = 0; i < 5 - randomNum; i++)
            {
                if(j == items.Count-1){
                    appearItems.Add(Instantiate(items[items.Count-1], pos, Quaternion.identity));
                }
                else{
                    appearItems.Add(Instantiate(items[symbolListCount], pos, Quaternion.identity));
                    
                }
                pos.x += symbolDistance;
                
            }

            //壁のハリを生成
            Vector2 posWallObstacleLeft = new Vector2(WallObstacleLeftX, (lineDistance/2) + lineHight);
            Vector2 posWallObstacleRight = new Vector2(WallObstacleRightX, (lineDistance/2) + lineHight);

            appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleLeft, Quaternion.identity));
            appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleRight, Quaternion.identity));

            //posWallObstacleLeft.y += lineDistance/3;
            //posWallObstacleRight.y += lineDistance/3;

            //appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleLeft, Quaternion.identity));
            //appearItems.Add(Instantiate(items[symbolListCount], posWallObstacleRight, Quaternion.identity));

            //中央のおじゃまブロックを生成
            if(j > 3){
                float obstacleX = Random.Range(-2.0f, -0.5f);
                float obstacleY = Random.Range(lineHight+1.5f, lineHight+3.5f);
                Vector2 posObstacle = new Vector2(obstacleX,obstacleY);

                appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle, Quaternion.identity));

                float obstacleX2 = Random.Range(0.5f, 2.0f);
                float obstacleY2 = Random.Range(lineHight+1.5f, lineHight+3.5f);
                Vector2 posObstacle2 = new Vector2(obstacleX2,obstacleY2);
                appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle2, Quaternion.identity));
            }
            else{
                float obstacleX = Random.Range(-2f, 2f);
                float obstacleY = Random.Range(lineHight+1.5f, lineHight+2.0f);
                Vector2 posObstacle = new Vector2(obstacleX,obstacleY);

                appearItems.Add(Instantiate(obstacles[symbolListCount], posObstacle, Quaternion.identity));
            }
            lineHight += lineDistance;
            pos = new Vector2(lineWidthStartPoint,lineHight);
            symbolListCount++;
            

        }
        
        symbolListCount=0;

    }    

    public static void HighScoreUpdate()
    {
        if(score > highScore){
            highScore = score;
            PlayerPrefs.SetInt("SCORE", highScore);
            PlayerPrefs.Save();

            isHighScored = true;

        }
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
