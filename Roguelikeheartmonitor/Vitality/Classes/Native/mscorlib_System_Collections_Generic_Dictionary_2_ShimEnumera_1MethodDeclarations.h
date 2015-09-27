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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1898;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1889;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12643_gshared (ShimEnumerator_t1898 * __this, Dictionary_2_t1889 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12643(__this, ___host, method) (( void (*) (ShimEnumerator_t1898 *, Dictionary_2_t1889 *, const MethodInfo*))ShimEnumerator__ctor_m12643_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12644_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12644(__this, method) (( bool (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_MoveNext_m12644_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t962  ShimEnumerator_get_Entry_m12645_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12645(__this, method) (( DictionaryEntry_t962  (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_get_Entry_m12645_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12646_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12646(__this, method) (( Object_t * (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_get_Key_m12646_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12647_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12647(__this, method) (( Object_t * (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_get_Value_m12647_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12648_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12648(__this, method) (( Object_t * (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_get_Current_m12648_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m12649_gshared (ShimEnumerator_t1898 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m12649(__this, method) (( void (*) (ShimEnumerator_t1898 *, const MethodInfo*))ShimEnumerator_Reset_m12649_gshared)(__this, method)
