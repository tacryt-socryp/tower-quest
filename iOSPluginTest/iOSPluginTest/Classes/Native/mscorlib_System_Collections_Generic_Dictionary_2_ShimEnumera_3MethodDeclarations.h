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

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>
struct ShimEnumerator_t1573;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1563;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m10120_gshared (ShimEnumerator_t1573 * __this, Dictionary_2_t1563 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m10120(__this, ___host, method) (( void (*) (ShimEnumerator_t1573 *, Dictionary_2_t1563 *, const MethodInfo*))ShimEnumerator__ctor_m10120_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m10121_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m10121(__this, method) (( bool (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_MoveNext_m10121_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Entry()
extern "C" DictionaryEntry_t479  ShimEnumerator_get_Entry_m10122_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m10122(__this, method) (( DictionaryEntry_t479  (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_get_Entry_m10122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m10123_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m10123(__this, method) (( Object_t * (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_get_Key_m10123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m10124_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m10124(__this, method) (( Object_t * (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_get_Value_m10124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m10125_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m10125(__this, method) (( Object_t * (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_get_Current_m10125_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Boolean>::Reset()
extern "C" void ShimEnumerator_Reset_m10126_gshared (ShimEnumerator_t1573 * __this, const MethodInfo* method);
#define ShimEnumerator_Reset_m10126(__this, method) (( void (*) (ShimEnumerator_t1573 *, const MethodInfo*))ShimEnumerator_Reset_m10126_gshared)(__this, method)
