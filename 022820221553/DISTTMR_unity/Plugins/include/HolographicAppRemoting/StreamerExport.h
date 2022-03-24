#pragma once

#define HOLOGRAPHIC_APP_REMOTING_VERSION                  L"2021.0.10.0"
#define HOLOGRAPHIC_APP_MIN_SUPPORTED_REMOTING_VERSION    L"2021.0.0.0"
#define HOLOGRAPHIC_APP_VR_MIN_SUPPORTED_REMOTING_VERSION L"2021.0.0.0"

#ifdef HolographicAppRemoting_EXPORTS
#    define STREAMER_EXPORT __declspec(dllexport)
#else
#    define STREAMER_EXPORT __declspec(dllimport)
#endif
#define STREAMER_CALL __cdecl
