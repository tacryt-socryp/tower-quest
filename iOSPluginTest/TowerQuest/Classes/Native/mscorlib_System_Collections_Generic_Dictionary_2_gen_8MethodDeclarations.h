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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1462;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t1703;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t1704;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t478;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t1532;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m9498_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9498(__this, method) (( void (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2__ctor_m9498_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9500_gshared (Dictionary_2_t1527 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9500(__this, ___comparer, method) (( void (*) (Dictionary_2_t1527 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9500_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9502_gshared (Dictionary_2_t1527 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9502(__this, ___capacity, method) (( void (*) (Dictionary_2_t1527 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9502_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9504_gshared (Dictionary_2_t1527 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9504(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1527 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2__ctor_m9504_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9506_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9506(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9506_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9508_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9508(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9508_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9510_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9510(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9510_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9512_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9512(__this, ___key, method) (( bool (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9512_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9514_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9514(__this, ___key, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9514_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9516_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9516(__this, method) (( Object_t * (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9516_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9518_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9518(__this, method) (( bool (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9518_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9520_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2_t1529  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9520(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1527 *, KeyValuePair_2_t1529 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9520_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9522_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2_t1529  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9522(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1527 *, KeyValuePair_2_t1529 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9522_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9524_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2U5BU5D_t1703* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9524(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1527 *, KeyValuePair_2U5BU5D_t1703*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9524_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9526_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2_t1529  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9526(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1527 *, KeyValuePair_2_t1529 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9526_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9528_gshared (Dictionary_2_t1527 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9528(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1527 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9528_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9530_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9530(__this, method) (( Object_t * (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9530_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9532_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9532(__this, method) (( Object_t* (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9532_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9534_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9534(__this, method) (( Object_t * (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9534_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9536_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9536(__this, method) (( int32_t (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_get_Count_m9536_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m9538_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9538(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m9538_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9540_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9540(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m9540_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9542_gshared (Dictionary_2_t1527 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9542(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1527 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9542_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9544_gshared (Dictionary_2_t1527 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9544(__this, ___size, method) (( void (*) (Dictionary_2_t1527 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9544_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9546_gshared (Dictionary_2_t1527 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9546(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1527 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9546_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1529  Dictionary_2_make_pair_m9548_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9548(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1529  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m9548_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m9550_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9550(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m9550_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9552_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2U5BU5D_t1703* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9552(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1527 *, KeyValuePair_2U5BU5D_t1703*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9552_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m9554_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9554(__this, method) (( void (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_Resize_m9554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9556_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9556(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m9556_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m9558_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9558(__this, method) (( void (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_Clear_m9558_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9560_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9560(__this, ___key, method) (( bool (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m9560_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9562_gshared (Dictionary_2_t1527 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9562(__this, ___value, method) (( bool (*) (Dictionary_2_t1527 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m9562_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9564_gshared (Dictionary_2_t1527 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9564(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1527 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2_GetObjectData_m9564_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9566_gshared (Dictionary_2_t1527 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9566(__this, ___sender, method) (( void (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9566_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9568_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9568(__this, ___key, method) (( bool (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m9568_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9570_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9570(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1527 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m9570_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t1532 * Dictionary_2_get_Values_m9572_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9572(__this, method) (( ValueCollection_t1532 * (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_get_Values_m9572_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m9574_gshared (Dictionary_2_t1527 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9574(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9574_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m9576_gshared (Dictionary_2_t1527 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9576(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1527 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9576_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9578_gshared (Dictionary_2_t1527 * __this, KeyValuePair_2_t1529  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9578(__this, ___pair, method) (( bool (*) (Dictionary_2_t1527 *, KeyValuePair_2_t1529 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9578_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t1534  Dictionary_2_GetEnumerator_m9580_gshared (Dictionary_2_t1527 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9580(__this, method) (( Enumerator_t1534  (*) (Dictionary_2_t1527 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9580_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t479  Dictionary_2_U3CCopyToU3Em__0_m9582_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9582(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t479  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9582_gshared)(__this /* static, unused */, ___key, ___value, method)
