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

// System.Comparison`1<UnityEngine.Vector3>
struct Comparison_1_t2001;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Comparison`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14227_gshared (Comparison_1_t2001 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14227(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2001 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14227_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14228_gshared (Comparison_1_t2001 * __this, Vector3_t19  ___x, Vector3_t19  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14228(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2001 *, Vector3_t19 , Vector3_t19 , const MethodInfo*))Comparison_1_Invoke_m14228_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector3>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14229_gshared (Comparison_1_t2001 * __this, Vector3_t19  ___x, Vector3_t19  ___y, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14229(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2001 *, Vector3_t19 , Vector3_t19 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14229_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14230_gshared (Comparison_1_t2001 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14230(__this, ___result, method) (( int32_t (*) (Comparison_1_t2001 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14230_gshared)(__this, ___result, method)
