using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ParticleFinish : MonoBehaviour
{
    private float fadeTime = 0.4f;
    private float particleTime = 0.7f;

    void Update()
    {
        if(Player.isGameOver)
        {
            StartCoroutine("WaitParticle");
            GameManager.HighScoreUpdate();
        }
        Player.isGameOver = false;
        
    }

    IEnumerator WaitParticle()
    {
        yield return new WaitForSeconds(particleTime);

        FadeManager.Instance.LoadScene("GameOver", fadeTime);

    }
}
