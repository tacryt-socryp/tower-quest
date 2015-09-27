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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1827;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1826;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2288;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2289;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t772;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1831;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11673_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11673(__this, method) (( void (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2__ctor_m11673_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11675_gshared (Dictionary_2_t1827 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11675(__this, ___comparer, method) (( void (*) (Dictionary_2_t1827 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11675_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11677_gshared (Dictionary_2_t1827 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11677(__this, ___capacity, method) (( void (*) (Dictionary_2_t1827 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11677_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11679_gshared (Dictionary_2_t1827 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11679(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1827 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m11679_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11681_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11681(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11681_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11683_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11683(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1827 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11683_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11685_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11685(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1827 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11685_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11687_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11687(__this, ___key, method) (( bool (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11687_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11689_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11689(__this, ___key, method) (( void (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11689_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11691_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11691(__this, method) (( bool (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11691_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11693_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11693(__this, method) (( Object_t * (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11693_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11695_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11695(__this, method) (( bool (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11695_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11697_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2_t1829  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11697(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1827 *, KeyValuePair_2_t1829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11697_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11699_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2_t1829  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11699(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1827 *, KeyValuePair_2_t1829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11699_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11701_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2U5BU5D_t2288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11701(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1827 *, KeyValuePair_2U5BU5D_t2288*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11701_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11703_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2_t1829  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11703(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1827 *, KeyValuePair_2_t1829 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11703_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11705_gshared (Dictionary_2_t1827 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11705(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1827 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11705_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11707_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11707(__this, method) (( Object_t * (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11707_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11709_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11709(__this, method) (( Object_t* (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11709_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11711_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11711(__this, method) (( Object_t * (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11711_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11713_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11713(__this, method) (( int32_t (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_get_Count_m11713_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11715_gshared (Dictionary_2_t1827 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11715(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1827 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11715_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11717_gshared (Dictionary_2_t1827 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11717(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1827 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11717_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11719_gshared (Dictionary_2_t1827 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11719(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1827 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11719_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11721_gshared (Dictionary_2_t1827 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11721(__this, ___size, method) (( void (*) (Dictionary_2_t1827 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11721_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11723_gshared (Dictionary_2_t1827 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11723(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1827 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11723_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1829  Dictionary_2_make_pair_m11725_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11725(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1829  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11725_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11727_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11727(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11727_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11729_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2U5BU5D_t2288* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11729(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1827 *, KeyValuePair_2U5BU5D_t2288*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11729_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11731_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11731(__this, method) (( void (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_Resize_m11731_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11733_gshared (Dictionary_2_t1827 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11733(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1827 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11733_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11735_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11735(__this, method) (( void (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_Clear_m11735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11737_gshared (Dictionary_2_t1827 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11737(__this, ___key, method) (( bool (*) (Dictionary_2_t1827 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11737_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11739_gshared (Dictionary_2_t1827 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11739(__this, ___value, method) (( bool (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11739_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11741_gshared (Dictionary_2_t1827 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11741(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1827 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m11741_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11743_gshared (Dictionary_2_t1827 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11743(__this, ___sender, method) (( void (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11743_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11745_gshared (Dictionary_2_t1827 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11745(__this, ___key, method) (( bool (*) (Dictionary_2_t1827 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11745_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11747_gshared (Dictionary_2_t1827 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11747(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1827 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11747_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1831 * Dictionary_2_get_Values_m11748_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11748(__this, method) (( ValueCollection_t1831 * (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_get_Values_m11748_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11750_gshared (Dictionary_2_t1827 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11750(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11750_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11752_gshared (Dictionary_2_t1827 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11752(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1827 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11752_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11754_gshared (Dictionary_2_t1827 * __this, KeyValuePair_2_t1829  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11754(__this, ___pair, method) (( bool (*) (Dictionary_2_t1827 *, KeyValuePair_2_t1829 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11754_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1833  Dictionary_2_GetEnumerator_m11755_gshared (Dictionary_2_t1827 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11755(__this, method) (( Enumerator_t1833  (*) (Dictionary_2_t1827 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11755_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m11757_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11757(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11757_gshared)(__this /* static, unused */, ___key, ___value, method)
