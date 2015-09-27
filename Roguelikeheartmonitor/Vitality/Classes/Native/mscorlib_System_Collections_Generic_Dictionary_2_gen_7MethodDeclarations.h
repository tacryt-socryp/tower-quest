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
struct Dictionary_2_t1720;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2277;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2278;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t772;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1728;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__0.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m10318_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m10318(__this, method) (( void (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2__ctor_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m10320_gshared (Dictionary_2_t1720 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m10320(__this, ___comparer, method) (( void (*) (Dictionary_2_t1720 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m10320_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m10321_gshared (Dictionary_2_t1720 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m10321(__this, ___capacity, method) (( void (*) (Dictionary_2_t1720 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m10321_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m10323_gshared (Dictionary_2_t1720 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m10323(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1720 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m10323_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m10325_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m10325(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m10325_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m10327_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m10327(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m10327_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m10329_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m10329(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m10329_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m10331_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m10331(__this, ___key, method) (( bool (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m10331_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m10333_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m10333(__this, ___key, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m10333_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10335_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10335(__this, method) (( bool (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m10335_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10337_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10337(__this, method) (( Object_t * (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m10337_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10339_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10339(__this, method) (( bool (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m10339_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10341_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10341(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1720 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m10341_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10343_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10343(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1720 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m10343_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10345_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10345(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1720 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m10345_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10347_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2_t1723  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10347(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1720 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10347_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10349_gshared (Dictionary_2_t1720 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1720 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10349_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10351_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10351(__this, method) (( Object_t * (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10351_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10353_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10353(__this, method) (( Object_t* (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10353_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10355_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10355(__this, method) (( Object_t * (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10355_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10357_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10357(__this, method) (( int32_t (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_get_Count_m10357_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m10359_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10359(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10359_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10361_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10361(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m10361_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10363_gshared (Dictionary_2_t1720 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10363(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1720 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10363_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10365_gshared (Dictionary_2_t1720 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10365(__this, ___size, method) (( void (*) (Dictionary_2_t1720 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10365_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10367_gshared (Dictionary_2_t1720 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10367(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1720 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10367_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1723  Dictionary_2_make_pair_m10369_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10369(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1723  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m10369_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m10371_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10371(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m10371_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10373_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2U5BU5D_t2277* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10373(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1720 *, KeyValuePair_2U5BU5D_t2277*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10373_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m10375_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10375(__this, method) (( void (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_Resize_m10375_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10377_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10377(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m10377_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m10379_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10379(__this, method) (( void (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_Clear_m10379_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10381_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10381(__this, ___key, method) (( bool (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10381_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10383_gshared (Dictionary_2_t1720 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10383(__this, ___value, method) (( bool (*) (Dictionary_2_t1720 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m10383_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10385_gshared (Dictionary_2_t1720 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10385(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1720 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m10385_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10387_gshared (Dictionary_2_t1720 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10387(__this, ___sender, method) (( void (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10387_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10389_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10389(__this, ___key, method) (( bool (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10389_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10391_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10391(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1720 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m10391_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1728 * Dictionary_2_get_Values_m10393_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10393(__this, method) (( ValueCollection_t1728 * (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_get_Values_m10393_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10395_gshared (Dictionary_2_t1720 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10395(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10395_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m10397_gshared (Dictionary_2_t1720 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10397(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1720 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10397_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10399_gshared (Dictionary_2_t1720 * __this, KeyValuePair_2_t1723  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10399(__this, ___pair, method) (( bool (*) (Dictionary_2_t1720 *, KeyValuePair_2_t1723 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10399_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1730  Dictionary_2_GetEnumerator_m10401_gshared (Dictionary_2_t1720 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10401(__this, method) (( Enumerator_t1730  (*) (Dictionary_2_t1720 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10401_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m10403_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10403(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10403_gshared)(__this /* static, unused */, ___key, ___value, method)
