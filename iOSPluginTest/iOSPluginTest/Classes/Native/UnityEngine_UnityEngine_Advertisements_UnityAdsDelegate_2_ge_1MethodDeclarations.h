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

// UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>
struct UnityAdsDelegate_2_t1551;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t51;
// System.AsyncCallback
struct AsyncCallback_t52;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAdsDelegate_2__ctor_m9786_gshared (UnityAdsDelegate_2_t1551 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAdsDelegate_2__ctor_m9786(__this, ___object, ___method, method) (( void (*) (UnityAdsDelegate_2_t1551 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAdsDelegate_2__ctor_m9786_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::Invoke(T1,T2)
extern "C" void UnityAdsDelegate_2_Invoke_m9787_gshared (UnityAdsDelegate_2_t1551 * __this, Object_t * ___p1, Object_t * ___p2, const MethodInfo* method);
#define UnityAdsDelegate_2_Invoke_m9787(__this, ___p1, ___p2, method) (( void (*) (UnityAdsDelegate_2_t1551 *, Object_t *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_Invoke_m9787_gshared)(__this, ___p1, ___p2, method)
// System.IAsyncResult UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAdsDelegate_2_BeginInvoke_m9788_gshared (UnityAdsDelegate_2_t1551 * __this, Object_t * ___p1, Object_t * ___p2, AsyncCallback_t52 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAdsDelegate_2_BeginInvoke_m9788(__this, ___p1, ___p2, ___callback, ___object, method) (( Object_t * (*) (UnityAdsDelegate_2_t1551 *, Object_t *, Object_t *, AsyncCallback_t52 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_BeginInvoke_m9788_gshared)(__this, ___p1, ___p2, ___callback, ___object, method)
// System.Void UnityEngine.Advertisements.UnityAdsDelegate`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAdsDelegate_2_EndInvoke_m9789_gshared (UnityAdsDelegate_2_t1551 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAdsDelegate_2_EndInvoke_m9789(__this, ___result, method) (( void (*) (UnityAdsDelegate_2_t1551 *, Object_t *, const MethodInfo*))UnityAdsDelegate_2_EndInvoke_m9789_gshared)(__this, ___result, method)
