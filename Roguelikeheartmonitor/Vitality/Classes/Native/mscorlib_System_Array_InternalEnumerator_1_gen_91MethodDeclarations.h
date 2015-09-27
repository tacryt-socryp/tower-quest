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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_91.h"
#include "mscorlib_System_Resources_ResourceReader_ResourceInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m16840_gshared (InternalEnumerator_1_t2243 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m16840(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2243 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m16840_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16841_gshared (InternalEnumerator_1_t2243 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16841(__this, method) (( void (*) (InternalEnumerator_1_t2243 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m16841_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16842_gshared (InternalEnumerator_1_t2243 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16842(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2243 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m16842_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m16843_gshared (InternalEnumerator_1_t2243 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m16843(__this, method) (( void (*) (InternalEnumerator_1_t2243 *, const MethodInfo*))InternalEnumerator_1_Dispose_m16843_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m16844_gshared (InternalEnumerator_1_t2243 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m16844(__this, method) (( bool (*) (InternalEnumerator_1_t2243 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m16844_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Resources.ResourceReader/ResourceInfo>::get_Current()
extern "C" ResourceInfo_t1263  InternalEnumerator_1_get_Current_m16845_gshared (InternalEnumerator_1_t2243 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m16845(__this, method) (( ResourceInfo_t1263  (*) (InternalEnumerator_1_t2243 *, const MethodInfo*))InternalEnumerator_1_get_Current_m16845_gshared)(__this, method)
