using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EventProcessor : MonoBehaviour
{
    public Text TextTime;
    public GameObject TextLatitude;
    public Text TextLongitude;
    public Image Renderer;

    private System.Object _queueLock = new System.Object();
    List<byte[]> _queuedData = new List<byte[]>();
    List<byte[]> _processingData = new List<byte[]>();
    public void QueueData(byte[] data)
    {
        lock (_queueLock)
        {
            _queuedData.Add(data);
        }
    }


    void Update()
    {
        TextMesh t = TextLatitude.GetComponent<TextMesh>();
        Debug.Log("update called");
        t.text = "Update Called";
        MoveQueuedEventsToExecuting();
        while (_processingData.Count > 0)
        {
            Debug.Log("EventProcessor while called");
            var byteData = _processingData[0];
            _processingData.RemoveAt(0);
            try
            {
                var gpsData = GPS_DataPacket.ParseDataPacket(byteData);
                TextTime.text = DateTime.Now.ToString("t");
                t.text = gpsData.Latitude.ToString();
                TextLongitude.text = gpsData.Longitude.ToString();
                if (Renderer != null)
                {
                    var url = "http://maps.googleapis.com/maps/api/staticmap?center=" + gpsData.Latitude.ToString("F5") + "," + gpsData.Longitude.ToString("F5") + "&zoom=14&size=640x640&type=hybrid&sensor=true&markers=color:blue%7Clabel:S%7C" + gpsData.Latitude + "," + gpsData.Longitude;
                    StartCoroutine(GetGoogleMap(new WWW(url), Renderer));
                }
                Debug.Log("found location");
            }
            catch (Exception e)
            {
                t.text = "Error: " + e.Message;
                Debug.Log("no location");
            }
        }
    }

    IEnumerator GetGoogleMap(WWW www, Image renderer)
    {
        yield return www;
        //renderer.material.mainTexture = www.texture;

        if (www.texture != null)
        {
            Texture2D texture = new Texture2D(www.texture.width, www.texture.height, TextureFormat.DXT1, false);
            www.LoadImageIntoTexture(texture);
            Rect rec = new Rect(0, 0, texture.width, texture.height);
            Sprite spriteToUse = Sprite.Create(texture, rec, new Vector2(0.5f, 0.5f), 100);
            renderer.sprite = spriteToUse;
        }
        www.Dispose();
        www = null;
    }


    private void MoveQueuedEventsToExecuting()
    {
        lock (_queueLock)
        {
            while (_queuedData.Count > 0)
            {
                byte[] data = _queuedData[0];
                _processingData.Add(data);
                _queuedData.RemoveAt(0);
            }
        }
    }
}