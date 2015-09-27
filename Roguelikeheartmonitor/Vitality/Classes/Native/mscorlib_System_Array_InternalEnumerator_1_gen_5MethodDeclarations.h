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
#include "mscorlib_System_Array_InternalEnumerator_1_gen_5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10476_gshared (InternalEnumerator_1_t1732 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10476(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1732 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10476_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10477_gshared (InternalEnumerator_1_t1732 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10477(__this, method) (( void (*) (InternalEnumerator_1_t1732 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10477_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10478_gshared (InternalEnumerator_1_t1732 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10478(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1732 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10478_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10479_gshared (InternalEnumerator_1_t1732 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10479(__this, method) (( void (*) (InternalEnumerator_1_t1732 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10479_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10480_gshared (InternalEnumerator_1_t1732 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10480(__this, method) (( bool (*) (InternalEnumerator_1_t1732 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10480_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.DictionaryEntry>::get_Current()
extern "C" DictionaryEntry_t962  InternalEnumerator_1_get_Current_m10481_gshared (InternalEnumerator_1_t1732 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10481(__this, method) (( DictionaryEntry_t962  (*) (InternalEnumerator_1_t1732 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10481_gshared)(__this, method)
