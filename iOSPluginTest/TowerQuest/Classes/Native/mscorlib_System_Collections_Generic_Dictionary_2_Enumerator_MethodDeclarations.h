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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1460;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m8879_gshared (Enumerator_t1469 * __this, Dictionary_2_t1460 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m8879(__this, ___dictionary, method) (( void (*) (Enumerator_t1469 *, Dictionary_2_t1460 *, const MethodInfo*))Enumerator__ctor_m8879_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m8880_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m8880(__this, method) (( Object_t * (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m8880_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m8881_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m8881(__this, method) (( void (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m8881_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t479  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8882_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8882(__this, method) (( DictionaryEntry_t479  (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m8882_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8883_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8883(__this, method) (( Object_t * (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m8883_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8884_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8884(__this, method) (( Object_t * (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m8884_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m8885_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m8885(__this, method) (( bool (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_MoveNext_m8885_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1463  Enumerator_get_Current_m8886_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m8886(__this, method) (( KeyValuePair_2_t1463  (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_get_Current_m8886_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m8887_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m8887(__this, method) (( Object_t * (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_get_CurrentKey_m8887_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m8888_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m8888(__this, method) (( int32_t (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_get_CurrentValue_m8888_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m8889_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_Reset_m8889(__this, method) (( void (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_Reset_m8889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m8890_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m8890(__this, method) (( void (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_VerifyState_m8890_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m8891_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m8891(__this, method) (( void (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_VerifyCurrent_m8891_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m8892_gshared (Enumerator_t1469 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m8892(__this, method) (( void (*) (Enumerator_t1469 *, const MethodInfo*))Enumerator_Dispose_m8892_gshared)(__this, method)
