﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.MulticastDelegate
struct MulticastDelegate_t159;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1646;
// System.Delegate
struct Delegate_t326;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m5716 (MulticastDelegate_t159 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m5717 (MulticastDelegate_t159 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m5718 (MulticastDelegate_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1646* MulticastDelegate_GetInvocationList_m5719 (MulticastDelegate_t159 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t326 * MulticastDelegate_CombineImpl_m5720 (MulticastDelegate_t159 * __this, Delegate_t326 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m5721 (MulticastDelegate_t159 * __this, MulticastDelegate_t159 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t159 * MulticastDelegate_KPM_m5722 (Object_t * __this /* static, unused */, MulticastDelegate_t159 * ___needle, MulticastDelegate_t159 * ___haystack, MulticastDelegate_t159 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t326 * MulticastDelegate_RemoveImpl_m5723 (MulticastDelegate_t159 * __this, Delegate_t326 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
