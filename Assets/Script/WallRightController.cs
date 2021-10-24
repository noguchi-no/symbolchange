using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallRightController : MonoBehaviour
{
    public GameObject wallRight;
    public GameObject symbol;

    void Start()
    {
        Vector2 wallSize = gameObject.transform.localScale;
        Vector2 max = Camera.main.ViewportToWorldPoint(new Vector2(1,0.5f));
        wallRight.transform.position = new Vector2(max.x+(wallSize.x/2), transform.position.y);
    }
        
    void Update()
    {
        Vector3 wallRightPos = symbol.transform.position;
        transform.position = new Vector3(transform.position.x, wallRightPos.y+4f, transform.position.z);
    }
}
