using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class playvideo : MonoBehaviour
{
    public VideoPlayer videoPlayer;
    //public VideoClip video;
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void PlayVideo()
    {
        videoPlayer.Play();

        videoPlayer.loopPointReached += EndReached;
        void EndReached(UnityEngine.Video.VideoPlayer vp)
        {
            videoPlayer.Stop();
        }
    }
}
