using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wallController : MonoBehaviour
{
     public GameObject wallLeft;
     public GameObject wallRight;
     public GameObject symbol;

    void Start()
    {
            
        
    }
        
    void Update()
    {
            Vector3 wallPos = symbol.transform.position;
            transform.position = new Vector3(transform.position.x, wallPos.y+4f, transform.position.z);
    }
}