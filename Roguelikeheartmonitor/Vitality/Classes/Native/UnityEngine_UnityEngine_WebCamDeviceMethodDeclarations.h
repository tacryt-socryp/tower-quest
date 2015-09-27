#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WebCamDevice.h"

// System.String UnityEngine.WebCamDevice::get_name()
extern "C" String_t* WebCamDevice_get_name_m2617 (WebCamDevice_t453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" bool WebCamDevice_get_isFrontFacing_m2618 (WebCamDevice_t453 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void WebCamDevice_t453_marshal(const WebCamDevice_t453& unmarshaled, WebCamDevice_t453_marshaled& marshaled);
extern "C" void WebCamDevice_t453_marshal_back(const WebCamDevice_t453_marshaled& marshaled, WebCamDevice_t453& unmarshaled);
extern "C" void WebCamDevice_t453_marshal_cleanup(WebCamDevice_t453_marshaled& marshaled);
