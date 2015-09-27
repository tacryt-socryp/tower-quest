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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1462;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1691;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1692;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t478;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1467;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m8758_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8758(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2__ctor_m8758_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8760_gshared (Dictionary_2_t1460 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8760(__this, ___comparer, method) (( void (*) (Dictionary_2_t1460 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8760_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8761_gshared (Dictionary_2_t1460 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8761(__this, ___capacity, method) (( void (*) (Dictionary_2_t1460 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8761_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8763_gshared (Dictionary_2_t1460 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8763(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1460 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2__ctor_m8763_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8765_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8765(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8765_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8767_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8767(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8767_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8769_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8769(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8769_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8771_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8771(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8771_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8773_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8773(__this, ___key, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8773_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8775_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8775(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8775_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8777_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8777(__this, method) (( bool (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8777_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8779_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2_t1463  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8779(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2_t1463 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m8779_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8781_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2_t1463  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8781(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t1463 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m8781_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8783_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2U5BU5D_t1691* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8783(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2U5BU5D_t1691*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m8783_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8785_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2_t1463  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8785(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t1463 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m8785_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m8787_gshared (Dictionary_2_t1460 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m8787(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m8787_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8789_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8789(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m8789_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8791_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8791(__this, method) (( Object_t* (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m8791_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8793_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8793(__this, method) (( Object_t * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m8793_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m8795_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m8795(__this, method) (( int32_t (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_get_Count_m8795_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m8797_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m8797(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m8797_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m8799_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m8799(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m8799_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m8801_gshared (Dictionary_2_t1460 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m8801(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1460 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m8801_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m8803_gshared (Dictionary_2_t1460 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m8803(__this, ___size, method) (( void (*) (Dictionary_2_t1460 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m8803_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m8805_gshared (Dictionary_2_t1460 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m8805(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m8805_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1463  Dictionary_2_make_pair_m8807_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m8807(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1463  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m8807_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m8809_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m8809(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m8809_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m8811_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2U5BU5D_t1691* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m8811(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1460 *, KeyValuePair_2U5BU5D_t1691*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m8811_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m8813_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m8813(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_Resize_m8813_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m8815_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m8815(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m8815_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m8817_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m8817(__this, method) (( void (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_Clear_m8817_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m8819_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m8819(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m8819_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m8821_gshared (Dictionary_2_t1460 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m8821(__this, ___value, method) (( bool (*) (Dictionary_2_t1460 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m8821_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m8823_gshared (Dictionary_2_t1460 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m8823(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1460 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2_GetObjectData_m8823_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m8825_gshared (Dictionary_2_t1460 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m8825(__this, ___sender, method) (( void (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m8825_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m8827_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m8827(__this, ___key, method) (( bool (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m8827_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m8829_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m8829(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1460 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m8829_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1467 * Dictionary_2_get_Values_m8831_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m8831(__this, method) (( ValueCollection_t1467 * (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_get_Values_m8831_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m8833_gshared (Dictionary_2_t1460 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m8833(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m8833_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m8835_gshared (Dictionary_2_t1460 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m8835(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1460 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m8835_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m8837_gshared (Dictionary_2_t1460 * __this, KeyValuePair_2_t1463  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m8837(__this, ___pair, method) (( bool (*) (Dictionary_2_t1460 *, KeyValuePair_2_t1463 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m8837_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1469  Dictionary_2_GetEnumerator_m8839_gshared (Dictionary_2_t1460 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m8839(__this, method) (( Enumerator_t1469  (*) (Dictionary_2_t1460 *, const MethodInfo*))Dictionary_2_GetEnumerator_m8839_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t479  Dictionary_2_U3CCopyToU3Em__0_m8841_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m8841(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t479  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m8841_gshared)(__this /* static, unused */, ___key, ___value, method)
