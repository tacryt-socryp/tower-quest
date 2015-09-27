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

// System.Func`2<System.Object,System.Single>
struct Func_2_t1991;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m14081_gshared (Func_2_t1991 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m14081(__this, ___object, ___method, method) (( void (*) (Func_2_t1991 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m14081_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Single>::Invoke(T)
extern "C" float Func_2_Invoke_m14082_gshared (Func_2_t1991 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m14082(__this, ___arg1, method) (( float (*) (Func_2_t1991 *, Object_t *, const MethodInfo*))Func_2_Invoke_m14082_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m14084_gshared (Func_2_t1991 * __this, Object_t * ___arg1, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m14084(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1991 *, Object_t *, AsyncCallback_t161 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m14084_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Single>::EndInvoke(System.IAsyncResult)
extern "C" float Func_2_EndInvoke_m14086_gshared (Func_2_t1991 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m14086(__this, ___result, method) (( float (*) (Func_2_t1991 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m14086_gshared)(__this, ___result, method)
