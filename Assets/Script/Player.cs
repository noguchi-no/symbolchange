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
    public bool squared;
    bool circled;
    bool isPolygon5;
    bool isPolygon6;
    bool isPolygon7;
    bool isPolygon8;
    bool isPolygon9;
    bool isPolygon10;
    //bool isPolygon11;

    public SoundManager sm;


    public Camera _camera;
    string colorCode;

    public float rotationSpeed;

    public List <ParticleSystem> particleList = new List<ParticleSystem>();
    public List <bool> currentGetSymbolList = new List<bool>();
    //public GameManager gameManager;

    public static bool isGameOver;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        currentSymbol = gameObject.GetComponent<SpriteRenderer>();
        rb.isKinematic = true;

        currentGetSymbolList[0] = true;

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
            rb.isKinematic = false;
            sm.JumpSE();
            rb.velocity = right * JumpPower;
            transform.Rotate(0,0,rotationSpeed);
            
        }
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            rb.isKinematic = false;
            sm.JumpSE();
            rb.velocity = left * JumpPower;
            transform.Rotate(0,0,-rotationSpeed);
            
        }
        //スマホ用
        if(Input.GetMouseButtonDown(0))
        {
            if (Input.mousePosition.x > Screen.width / 2)
            {
                rb.isKinematic = false;
                sm.JumpSE();
                rb.velocity = right * JumpPower;
                transform.Rotate(0,0,rotationSpeed);
                
            }
            if (Input.mousePosition.x < Screen.width / 2)
            {
                rb.isKinematic = false;
                sm.JumpSE();
                rb.velocity = left * JumpPower;
                transform.Rotate(0,0,-rotationSpeed);

            }
        }
    }
    void OnBecameInvisible()
    {
        //Debug.Log("見えないのでゲームオーバー");
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
                currentGetSymbolList[1] = true;
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
                
            }
            else{
            Debug.Log("シンボル間違えたからゲームオーバー");
            particleList[particleList.Count-1].Play();
            sm.BreakSE();
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
                    currentGetSymbolList[2] = true;
                    return;
                
            }
                
            if(other.gameObject.tag == "Circle"){

                GameManager.score++;
                currentSymbol.sprite = circleSprite;
                Destroy(other.gameObject);
                squared = false;
                circled = true;
                sm.ChangeSE();
                
            }
                
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[2].Play();
            sm.BreakSE();
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
                currentGetSymbolList[3] = true;
                return;
            
            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon5 = false;
                    circled = true;
                    sm.ChangeSE();
                    colorCode = "#ffd6d6";
                    ColorChange();
                    
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[3].Play();
            sm.BreakSE();
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
            currentGetSymbolList[4] = true;
            return;

            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon6 = false;
                    circled = true;
                    colorCode = "#ffead6";
                    ColorChange();
                    sm.ChangeSE();
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[4].Play();
            sm.BreakSE();
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
            currentGetSymbolList[5] = true;
            return;
            
            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon7 = false;
                    circled = true;
                    colorCode = "#ffffd6";
                    ColorChange();
                    sm.ChangeSE();
                    
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[5].Play();
            sm.BreakSE();
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
            currentGetSymbolList[6] = true;
            return;
            
            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon8 = false;
                    circled = true;
                    colorCode = "#d6ffd6";
                    ColorChange();
                    sm.ChangeSE();
                    
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[6].Play();
            sm.BreakSE();
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
            currentGetSymbolList[7] = true;
            return;
            
            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon9 = false;
                    circled = true;
                    colorCode = "#d6ffff";
                    ColorChange();
                    sm.ChangeSE();
                    
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[7].Play();
            sm.BreakSE();
            }
            
        }
        else if(isPolygon10){

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon10 = false;
                    circled = true;
                    colorCode = "#d6d6ff";
                    ColorChange();
                    sm.ChangeSE();
                    
            }
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            particleList[8].Play();
            sm.BreakSE();
            }
            
        }


            
    }
}
