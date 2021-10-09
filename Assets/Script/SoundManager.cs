using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    public AudioClip jumpSE;
    public AudioClip buttonSE;
    public AudioClip changeSE;
    public AudioClip breakSE;

    public AudioSource aud;
    
   
    public void ButtonSE()
    {
        aud.PlayOneShot(buttonSE);
    } 
    public void JumpSE()
    {
        aud.PlayOneShot(jumpSE, 0.3f);
    } 
    public void ChangeSE()
    {
        aud.PlayOneShot(changeSE, 0.8f);
    } 
    public void BreakSE()
    {
        aud.PlayOneShot(breakSE, 0.8f);
    } 
}
