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

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2100;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m15382_gshared (Comparison_1_t2100 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m15382(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2100 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m15382_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15383_gshared (Comparison_1_t2100 * __this, UICharInfo_t338  ___x, UICharInfo_t338  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15383(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2100 *, UICharInfo_t338 , UICharInfo_t338 , const MethodInfo*))Comparison_1_Invoke_m15383_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15384_gshared (Comparison_1_t2100 * __this, UICharInfo_t338  ___x, UICharInfo_t338  ___y, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15384(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2100 *, UICharInfo_t338 , UICharInfo_t338 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15384_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15385_gshared (Comparison_1_t2100 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15385(__this, ___result, method) (( int32_t (*) (Comparison_1_t2100 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15385_gshared)(__this, ___result, method)
