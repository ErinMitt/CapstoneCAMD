//
// Copyright (C) Microsoft. All rights reserved.
//

#pragma once

#include <winrt/Microsoft.Holographic.AppRemoting.h>

#include "StreamerExport.h"

extern "C" STREAMER_EXPORT HRESULT STREAMER_CALL CreateRemoteContext(
    _Inout_ winrt::Microsoft::Holographic::AppRemoting::IRemoteContext& result,
    uint32_t maxBitrateKbps = 20000,
    bool enableAudio = true,
    winrt::Microsoft::Holographic::AppRemoting::PreferredVideoCodec preferredVideoCodec =
        winrt::Microsoft::Holographic::AppRemoting::PreferredVideoCodec::Default);

struct IPerceptionDeviceFactory;
extern "C" STREAMER_EXPORT HRESULT STREAMER_CALL CreatePerceptionDeviceFactory(_COM_Outptr_ IPerceptionDeviceFactory** result);

class IHolographicStreamerEventListener
{
public:
    virtual void OnConnected() = 0;
    virtual void OnDisconnected(winrt::Microsoft::Holographic::AppRemoting::ConnectionFailureReason reason) = 0;
    virtual void OnDataChannelCreated(const winrt::Microsoft::Holographic::AppRemoting::IDataChannel& dataChannel, uint8_t channelId) = 0;
    virtual void OnListening(uint16_t port) = 0;
    virtual void
        OnRequestRenderTargetSize(winrt::Windows::Foundation::Size requestedSize, winrt::Windows::Foundation::Size providedSize) = 0;
};
