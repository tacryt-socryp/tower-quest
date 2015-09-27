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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t2238;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgument.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m16806_gshared (Comparison_1_t2238 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m16806(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2238 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m16806_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m16807_gshared (Comparison_1_t2238 * __this, CustomAttributeNamedArgument_t1232  ___x, CustomAttributeNamedArgument_t1232  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m16807(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2238 *, CustomAttributeNamedArgument_t1232 , CustomAttributeNamedArgument_t1232 , const MethodInfo*))Comparison_1_Invoke_m16807_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m16808_gshared (Comparison_1_t2238 * __this, CustomAttributeNamedArgument_t1232  ___x, CustomAttributeNamedArgument_t1232  ___y, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m16808(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2238 *, CustomAttributeNamedArgument_t1232 , CustomAttributeNamedArgument_t1232 , AsyncCallback_t161 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m16808_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m16809_gshared (Comparison_1_t2238 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m16809(__this, ___result, method) (( int32_t (*) (Comparison_1_t2238 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m16809_gshared)(__this, ___result, method)
