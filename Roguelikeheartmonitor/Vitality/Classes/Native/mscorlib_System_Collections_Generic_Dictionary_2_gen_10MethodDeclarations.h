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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2154;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2332;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2333;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t772;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2159;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m15952_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15952(__this, method) (( void (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2__ctor_m15952_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15953_gshared (Dictionary_2_t2154 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15953(__this, ___comparer, method) (( void (*) (Dictionary_2_t2154 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15953_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15955_gshared (Dictionary_2_t2154 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15955(__this, ___capacity, method) (( void (*) (Dictionary_2_t2154 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15955_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15957_gshared (Dictionary_2_t2154 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15957(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2154 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m15957_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15959_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15959(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15959_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15961_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15961(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15961_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15963_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15963(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15963_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15965_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15965(__this, ___key, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15965_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15967_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15967(__this, ___key, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15967_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15969_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15969(__this, method) (( bool (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15971_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15971(__this, method) (( Object_t * (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15971_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15973_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15973(__this, method) (( bool (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15975_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2_t2156  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15975(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2154 *, KeyValuePair_2_t2156 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15975_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15977_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2_t2156  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15977(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2154 *, KeyValuePair_2_t2156 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15977_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15979_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2U5BU5D_t2332* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15979(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2154 *, KeyValuePair_2U5BU5D_t2332*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15979_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15981_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2_t2156  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15981(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2154 *, KeyValuePair_2_t2156 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15981_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15983_gshared (Dictionary_2_t2154 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15983(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2154 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15983_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15985_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15985(__this, method) (( Object_t * (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15985_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15987_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15987(__this, method) (( Object_t* (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15987_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15989_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15989(__this, method) (( Object_t * (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15989_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15991_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15991(__this, method) (( int32_t (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_get_Count_m15991_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m15993_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15993(__this, ___key, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15993_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15995_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15995(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m15995_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15997_gshared (Dictionary_2_t2154 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15997(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2154 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15997_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15999_gshared (Dictionary_2_t2154 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15999(__this, ___size, method) (( void (*) (Dictionary_2_t2154 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15999_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m16001_gshared (Dictionary_2_t2154 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m16001(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2154 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m16001_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2156  Dictionary_2_make_pair_m16003_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m16003(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2156  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m16003_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m16005_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m16005(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m16005_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m16007_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2U5BU5D_t2332* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m16007(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2154 *, KeyValuePair_2U5BU5D_t2332*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m16007_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m16009_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m16009(__this, method) (( void (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_Resize_m16009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m16011_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m16011(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m16011_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m16013_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m16013(__this, method) (( void (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_Clear_m16013_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m16015_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m16015(__this, ___key, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m16015_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m16017_gshared (Dictionary_2_t2154 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m16017(__this, ___value, method) (( bool (*) (Dictionary_2_t2154 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m16017_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m16019_gshared (Dictionary_2_t2154 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m16019(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2154 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m16019_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m16021_gshared (Dictionary_2_t2154 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m16021(__this, ___sender, method) (( void (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m16021_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m16023_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m16023(__this, ___key, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m16023_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m16025_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m16025(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m16025_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2159 * Dictionary_2_get_Values_m16027_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m16027(__this, method) (( ValueCollection_t2159 * (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_get_Values_m16027_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m16029_gshared (Dictionary_2_t2154 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m16029(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m16029_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m16031_gshared (Dictionary_2_t2154 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m16031(__this, ___value, method) (( bool (*) (Dictionary_2_t2154 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m16031_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m16033_gshared (Dictionary_2_t2154 * __this, KeyValuePair_2_t2156  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m16033(__this, ___pair, method) (( bool (*) (Dictionary_2_t2154 *, KeyValuePair_2_t2156 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m16033_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2161  Dictionary_2_GetEnumerator_m16035_gshared (Dictionary_2_t2154 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m16035(__this, method) (( Enumerator_t2161  (*) (Dictionary_2_t2154 *, const MethodInfo*))Dictionary_2_GetEnumerator_m16035_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m16037_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m16037(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m16037_gshared)(__this /* static, unused */, ___key, ___value, method)
