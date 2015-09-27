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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1527;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m9626_gshared (Enumerator_t1534 * __this, Dictionary_2_t1527 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m9626(__this, ___dictionary, method) (( void (*) (Enumerator_t1534 *, Dictionary_2_t1527 *, const MethodInfo*))Enumerator__ctor_m9626_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m9627_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m9627(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m9627_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m9628_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m9628(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m9628_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t479  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9629_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9629(__this, method) (( DictionaryEntry_t479  (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m9629_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9630_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9630(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m9630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9631_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9631(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m9631_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m9632_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m9632(__this, method) (( bool (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_MoveNext_m9632_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t1529  Enumerator_get_Current_m9633_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m9633(__this, method) (( KeyValuePair_2_t1529  (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_Current_m9633_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m9634_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m9634(__this, method) (( Object_t * (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_CurrentKey_m9634_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m9635_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m9635(__this, method) (( int32_t (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_get_CurrentValue_m9635_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Reset()
extern "C" void Enumerator_Reset_m9636_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_Reset_m9636(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_Reset_m9636_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m9637_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m9637(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_VerifyState_m9637_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m9638_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m9638(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_VerifyCurrent_m9638_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m9639_gshared (Enumerator_t1534 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m9639(__this, method) (( void (*) (Enumerator_t1534 *, const MethodInfo*))Enumerator_Dispose_m9639_gshared)(__this, method)
