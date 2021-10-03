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

    bool isTriangle = true;
    public bool squared;
    bool circled;
    bool isPolygon5;
    bool isPolygon6;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        currentSymbol = gameObject.GetComponent<SpriteRenderer>();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.RightArrow))
        {
            rb.velocity = right * JumpPower;
        }
        if(Input.GetKeyDown(KeyCode.LeftArrow))
        {
            rb.velocity = left * JumpPower;
        }


    }

    void OnBecameInvisible()
    {
        //Debug.Log("見えないのでゲームオーバー");
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if(isTriangle){
            
            if(other.gameObject.tag == "Square"){
                GameManager.score++;
                currentSymbol.sprite = squareSprite;
                Destroy(other.gameObject);
                isTriangle = false;
                squared = true;
            }
            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            }
        }

        else if(circled){
            
            if(other.gameObject.tag == "Triangle"){
                GameManager.score++;
                currentSymbol.sprite = triangleSprite;
                Destroy(other.gameObject);
                circled = false;
                isTriangle = true;
            }
            else{
            //Debug.Log("シンボル間違えたからゲームオーバー");
            }
            
        }

        else if(squared){
            
            if(other.gameObject.tag == "Polygon5"){

                    GameManager.score++;
                    currentSymbol.sprite = polygon5Sprite;
                    Destroy(other.gameObject);
                    squared = false;
                    isPolygon5 = true;
                    return;
                
            }
                
            if(other.gameObject.tag == "Circle"){

                GameManager.score++;
                currentSymbol.sprite = circleSprite;
                Destroy(other.gameObject);
                squared = false;
                circled = true;
            }
                
            else{
            Debug.Log("シンボル違ったからゲームオーバー");
            }
            
        }

        

        else if(isPolygon5){

            if(other.gameObject.tag == "Polygon6"){
            GameManager.score++;
            currentSymbol.sprite = polygon6Sprite;
            Destroy(other.gameObject);
            isPolygon5 = false;
            isPolygon6 = true;
            return;
            }

            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon5 = false;
                    circled = true;
            }
            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            }
            
        }
        else if(isPolygon6){
            
            if(other.gameObject.tag == "Circle"){
                    GameManager.score++;
                    currentSymbol.sprite = circleSprite;
                    Destroy(other.gameObject);
                    isPolygon6 = false;
                    circled = true;
            }
            else{
            //Debug.Log("シンボル違ったからゲームオーバー");
            }
            //polygon = true;
        }
            
    }
}
