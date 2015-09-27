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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1473;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1460;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m8917_gshared (ShimEnumerator_t1473 * __this, Dictionary_2_t1460 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m8917(__this, ___host, method) (( void (*) (ShimEnumerator_t1473 *, Dictionary_2_t1460 *, const MethodInfo*))ShimEnumerator__ctor_m8917_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m8918_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m8918(__this, method) (( bool (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_MoveNext_m8918_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t479  ShimEnumerator_get_Entry_m8919_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m8919(__this, method) (( DictionaryEntry_t479  (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_get_Entry_m8919_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m8920_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m8920(__this, method) (( Object_t * (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_get_Key_m8920_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m8921_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m8921(__this, method) (( Object_t * (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_get_Value_m8921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m8922_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m8922(__this, method) (( Object_t * (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_get_Current_m8922_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::Reset()
extern "C" void ShimEnumerator_Reset_m8923_gshared (ShimEnumerator_t1473 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m8923(__this, method) (( void (*) (ShimEnumerator_t1473 *, const MethodInfo*))ShimEnumerator_Reset_m8923_gshared)(__this, method)
