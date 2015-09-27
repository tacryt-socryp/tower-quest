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

// System.Reflection.MonoProperty/StaticGetter`1<System.Object>
struct StaticGetter_1_t2242;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/StaticGetter`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void StaticGetter_1__ctor_m16836_gshared (StaticGetter_1_t2242 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define StaticGetter_1__ctor_m16836(__this, ___object, ___method, method) (( void (*) (StaticGetter_1_t2242 *, Object_t *, IntPtr_t, const MethodInfo*))StaticGetter_1__ctor_m16836_gshared)(__this, ___object, ___method, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::Invoke()
extern "C" Object_t * StaticGetter_1_Invoke_m16837_gshared (StaticGetter_1_t2242 * __this, const MethodInfo* method);
#define StaticGetter_1_Invoke_m16837(__this, method) (( Object_t * (*) (StaticGetter_1_t2242 *, const MethodInfo*))StaticGetter_1_Invoke_m16837_gshared)(__this, method)
// System.IAsyncResult System.Reflection.MonoProperty/StaticGetter`1<System.Object>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * StaticGetter_1_BeginInvoke_m16838_gshared (StaticGetter_1_t2242 * __this, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define StaticGetter_1_BeginInvoke_m16838(__this, ___callback, ___object, method) (( Object_t * (*) (StaticGetter_1_t2242 *, AsyncCallback_t161 *, Object_t *, const MethodInfo*))StaticGetter_1_BeginInvoke_m16838_gshared)(__this, ___callback, ___object, method)
// R System.Reflection.MonoProperty/StaticGetter`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * StaticGetter_1_EndInvoke_m16839_gshared (StaticGetter_1_t2242 * __this, Object_t * ___result, const MethodInfo* method);
#define StaticGetter_1_EndInvoke_m16839(__this, ___result, method) (( Object_t * (*) (StaticGetter_1_t2242 *, Object_t *, const MethodInfo*))StaticGetter_1_EndInvoke_m16839_gshared)(__this, ___result, method)
