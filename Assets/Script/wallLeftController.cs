using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wallLeftController : MonoBehaviour
{
        public GameObject wallLeft;
        public GameObject symbol;

    void Start()
    {
        Vector2 wallSize = gameObject.transform.localScale;
        Vector2 min = Camera.main.ViewportToWorldPoint(new Vector2(0,0.5f));
        wallLeft.transform.position = new Vector2(min.x-(wallSize.x/2), transform.position.y);
    }
        
    void Update()
    {
        Vector3 wallPos = symbol.transform.position;
        transform.position = new Vector3(transform.position.x, wallPos.y+4f, transform.position.z);
    }
}