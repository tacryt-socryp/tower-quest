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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t2030;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m14661_gshared (Predicate_1_t2030 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m14661(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2030 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14661_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m14662_gshared (Predicate_1_t2030 * __this, Vector4_t250  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m14662(__this, ___obj, method) (( bool (*) (Predicate_1_t2030 *, Vector4_t250 , const MethodInfo*))Predicate_1_Invoke_m14662_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m14663_gshared (Predicate_1_t2030 * __this, Vector4_t250  ___obj, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m14663(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2030 *, Vector4_t250 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14663_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m14664_gshared (Predicate_1_t2030 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m14664(__this, ___result, method) (( bool (*) (Predicate_1_t2030 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14664_gshared)(__this, ___result, method)
