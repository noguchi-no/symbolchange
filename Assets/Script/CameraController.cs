using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public GameObject player;
    Vector3 lastPos = new Vector3(0,0,0);

    void Start()
    {
        //GetComponent<Camera>().backgroundColor = Color.red;
    }    
    void Update()
    {
        Vector3 playerPos = this.player.transform.position;
        
        if((playerPos - lastPos).y > 0){

            transform.position = new Vector3(transform.position.x, playerPos.y, transform.position.z);
            lastPos = transform.position;
   
        }
        

    }
}
