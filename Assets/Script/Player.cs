using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Player : MonoBehaviour
{
    public float JumpPower;
    Rigidbody2D rb;
    public Vector2 right = new Vector2();
    public Vector2 left = new Vector2();
    

    SpriteRenderer currentSymbol;
    public Sprite squareSprite;
    public Sprite triangleSprite;
    public Sprite circleSprite;
    public Sprite polygon5Sprite;
    public Sprite polygon6Sprite;
    public Sprite polygon7Sprite;
    public Sprite polygon8Sprite;
    public Sprite polygon9Sprite;
    public Sprite polygon10Sprite;
    //public Sprite polygon11Sprite;


    bool isTriangle = true;
    bool squared;
    bool circled;
    bool isPolygon5;
    bool isPolygon6;
    bool isPolygon7;
    bool isPolygon8;
    bool isPolygon9;
    public bool isPolygon10;
    //bool isPolygon11;

    public SoundManager sm;


    public Camera _camera;
    string colorCode;

    public float rotationSpeed;

    public List <ParticleSystem> particleList = new List<ParticleSystem>();

    
    //public List <bool> currentGetSymbolList = new List<bool>();
    //public GameManager gameManager;
    public static int symbolLevel;

    public static bool isGameOver;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        currentSymbol = gameObject.GetComponent<SpriteRenderer>();
        rb.isKinematic = true;

        symbolLevel = 1;

    }

    // Update is called once per frame
    void Update()
    {
        leftRightTap();

    }

    void leftRightTap()
    {
        //PC用↓
        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            rb.velocity = right * JumpPower;
            rb.isKinematic = false;
            sm.JumpSE();
            transform.Rotate(0,0,rotationSpeed);
            
        }
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            rb.velocity = left * JumpPower;
            rb.isKinematic = false;
            sm.JumpSE();
            transform.Rotate(0,0,-rotationSpeed);
            
        }
        //スマホ用
        if(Input.GetMouseButtonDown(0))
        {
            if (Input.mousePosition.x > Screen.width / 2)
            {
                rb.velocity = right * JumpPower;
                rb.isKinematic = false;
                sm.JumpSE();               
                transform.Rotate(0,0,rotationSpeed);
                
            }
            if (Input.mousePosition.x < Screen.width / 2)
            {
                rb.velocity = left * JumpPower;
                rb.isKinematic = false;
                sm.JumpSE();                
                transform.Rotate(0,0,-rotationSpeed);

            }
        }
    }

    void OnBecameInvisible()
    {
        var pos = gameObject.transform.position;
        for(int i = 0; i < particleList.Count; i++)
        {
            particleList[i].transform.position = pos;
        }
        particleList[0].Play();
        GameOver();
    }

    public void ColorChange()
    {
        
        if(ColorUtility.TryParseHtmlString(colorCode, out Color color))
        {
            _camera.backgroundColor = color;
        }

    }
    void GameOver()
    {
        sm.BreakSE();
        isGameOver = true;
        gameObject.SetActive(false);
        
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        var pos = gameObject.transform.position;
        for(int i = 0; i < particleList.Count; i++)
        {
            particleList[i].transform.position = pos;
        }
        
        if(isTriangle){
            
            if(other.gameObject.tag == "Square"){
                GameManager.score++;
                currentSymbol.sprite = squareSprite;
                Destroy(other.gameObject);
                isTriangle = false;
                squared = true;
                sm.ChangeSE();
                if(symbolLevel==1){
                    symbolLevel = 2;
                }
                colorCode = "#ffd6d6";
                ColorChange();
            }
            else{
            
            particleList[0].Play();
            GameOver();
            }
        }

        else if(circled){
            
            if(other.gameObject.tag == "Triangle"){
                GameManager.score++;
                currentSymbol.sprite = triangleSprite;
                Destroy(other.gameObject);
                circled = false;
                isTriangle = true;
                sm.ChangeSE();
                colorCode = "#ffffff";
                ColorChange();
                
            }
            else{
            
            particleList[particleList.Count-1].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }

        else if(squared){
            
            if(other.gameObject.tag == "Polygon5"){

                    GameManager.score++;
                    currentSymbol.sprite = polygon5Sprite;
                    Destroy(other.gameObject);
                    squared = false;
                    isPolygon5 = true;
                    sm.ChangeSE();
                    if(symbolLevel==2){
                    symbolLevel = 3;
                    }
                    colorCode = "#ffffd6";
                    ColorChange();                    
                    return;
                
            }
                
            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[2].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }

        else if(isPolygon5){

            if(other.gameObject.tag == "Polygon6"){
                GameManager.score++;
                currentSymbol.sprite = polygon6Sprite;
                Destroy(other.gameObject);
                isPolygon5 = false;
                isPolygon6 = true;
                sm.ChangeSE();
                if(symbolLevel==3){
                symbolLevel = 4;
                }
 
                colorCode = "#eaffd6";
                ColorChange();
                return;
            
            }

            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[3].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }
        else if(isPolygon6){

            if(other.gameObject.tag == "Polygon7"){
            GameManager.score++;
            currentSymbol.sprite = polygon7Sprite;
            Destroy(other.gameObject);
            isPolygon6 = false;
            isPolygon7 = true;
            sm.ChangeSE();
            if(symbolLevel==4){
            symbolLevel = 5;
            }
            colorCode = "#d6ffff";
            ColorChange();
            return;

            }

            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[4].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }
        else if(isPolygon7){

            if(other.gameObject.tag == "Polygon8"){
            GameManager.score++;
            currentSymbol.sprite = polygon8Sprite;
            Destroy(other.gameObject);
            isPolygon7 = false;
            isPolygon8 = true;
            sm.ChangeSE();
            if(symbolLevel==5){
            symbolLevel = 6;
            }
            colorCode = "#d6d6ff";
            ColorChange();
            return;
            
            }

            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[5].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }
        else if(isPolygon8){

            if(other.gameObject.tag == "Polygon9"){
            GameManager.score++;
            currentSymbol.sprite = polygon9Sprite;
            Destroy(other.gameObject);
            isPolygon8 = false;
            isPolygon9 = true;
            sm.ChangeSE();
            if(symbolLevel==6){
            symbolLevel = 7;
            }
 
            colorCode = "#d6eaff";
            ColorChange();
            return;
            
            }

            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[6].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }
        else if(isPolygon9){

            if(other.gameObject.tag == "Polygon10"){
            GameManager.score++;
            currentSymbol.sprite = polygon10Sprite;
            Destroy(other.gameObject);
            isPolygon9 = false;
            isPolygon10 = true;
            sm.ChangeSE();
            if(symbolLevel==7){
            symbolLevel = 8;
            }
            colorCode = "#ead6ff";
            ColorChange();
            return;
            
            }

            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[7].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }
        else if(isPolygon10){

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon10 = false;
                    circled = true;
                    sm.ChangeSE();
                    
            }
            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            particleList[8].Play();
            sm.BreakSE();
            GameOver();
            }
            
        }


            
    }
}
