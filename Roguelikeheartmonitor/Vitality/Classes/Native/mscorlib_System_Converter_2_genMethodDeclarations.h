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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t2186;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t160;
// System.AsyncCallback
struct AsyncCallback_t161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Converter_2__ctor_m16311_gshared (Converter_2_t2186 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Converter_2__ctor_m16311(__this, ___object, ___method, method) (( void (*) (Converter_2_t2186 *, Object_t *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m16311_gshared)(__this, ___object, ___method, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C" Object_t * Converter_2_Invoke_m16312_gshared (Converter_2_t2186 * __this, Object_t * ___input, const MethodInfo* method);
#define Converter_2_Invoke_m16312(__this, ___input, method) (( Object_t * (*) (Converter_2_t2186 *, Object_t *, const MethodInfo*))Converter_2_Invoke_m16312_gshared)(__this, ___input, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C" Object_t * Converter_2_BeginInvoke_m16313_gshared (Converter_2_t2186 * __this, Object_t * ___input, AsyncCallback_t161 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Converter_2_BeginInvoke_m16313(__this, ___input, ___callback, ___object, method) (( Object_t * (*) (Converter_2_t2186 *, Object_t *, AsyncCallback_t161 *, Object_t *, const MethodInfo*))Converter_2_BeginInvoke_m16313_gshared)(__this, ___input, ___callback, ___object, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Converter_2_EndInvoke_m16314_gshared (Converter_2_t2186 * __this, Object_t * ___result, const MethodInfo* method);
#define Converter_2_EndInvoke_m16314(__this, ___result, method) (( Object_t * (*) (Converter_2_t2186 *, Object_t *, const MethodInfo*))Converter_2_EndInvoke_m16314_gshared)(__this, ___result, method)
