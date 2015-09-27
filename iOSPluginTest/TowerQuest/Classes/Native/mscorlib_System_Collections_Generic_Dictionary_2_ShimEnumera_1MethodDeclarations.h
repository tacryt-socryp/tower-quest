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
struct ShimEnumerator_t1509;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1500;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m9341_gshared (ShimEnumerator_t1509 * __this, Dictionary_2_t1500 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m9341(__this, ___host, method) (( void (*) (ShimEnumerator_t1509 *, Dictionary_2_t1500 *, const MethodInfo*))ShimEnumerator__ctor_m9341_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m9342_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m9342(__this, method) (( bool (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_MoveNext_m9342_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t479  ShimEnumerator_get_Entry_m9343_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m9343(__this, method) (( DictionaryEntry_t479  (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Entry_m9343_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m9344_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m9344(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Key_m9344_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m9345_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m9345(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Value_m9345_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m9346_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m9346(__this, method) (( Object_t * (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_get_Current_m9346_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
extern "C" void ShimEnumerator_Reset_m9347_gshared (ShimEnumerator_t1509 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m9347(__this, method) (( void (*) (ShimEnumerator_t1509 *, const MethodInfo*))ShimEnumerator_Reset_m9347_gshared)(__this, method)
