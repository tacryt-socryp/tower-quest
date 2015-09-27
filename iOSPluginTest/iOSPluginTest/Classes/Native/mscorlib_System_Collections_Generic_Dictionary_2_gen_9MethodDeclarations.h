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
struct Dictionary_2_t1563;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1462;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1710;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1711;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t478;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1568;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m9973_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m9973(__this, method) (( void (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2__ctor_m9973_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m9974_gshared (Dictionary_2_t1563 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m9974(__this, ___comparer, method) (( void (*) (Dictionary_2_t1563 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m9974_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m9976_gshared (Dictionary_2_t1563 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m9976(__this, ___capacity, method) (( void (*) (Dictionary_2_t1563 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m9976_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m9978_gshared (Dictionary_2_t1563 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m9978(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1563 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2__ctor_m9978_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m9980_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m9980(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m9980_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m9982_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m9982(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m9982_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m9984_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m9984(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m9984_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m9986_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m9986(__this, ___key, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m9986_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m9988_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m9988(__this, ___key, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m9988_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9990_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9990(__this, method) (( Object_t * (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m9990_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9992_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9992(__this, method) (( bool (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m9992_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9994_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2_t1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9994(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1563 *, KeyValuePair_2_t1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9994_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9996_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2_t1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9996(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1563 *, KeyValuePair_2_t1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9996_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9998_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2U5BU5D_t1710* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9998(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1563 *, KeyValuePair_2U5BU5D_t1710*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9998_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10000_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2_t1565  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10000(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1563 *, KeyValuePair_2_t1565 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m10000_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m10002_gshared (Dictionary_2_t1563 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m10002(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1563 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m10002_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10004_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10004(__this, method) (( Object_t * (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m10004_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10006_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10006(__this, method) (( Object_t* (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m10006_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10008_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10008(__this, method) (( Object_t * (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m10008_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m10010_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m10010(__this, method) (( int32_t (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_get_Count_m10010_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m10012_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m10012(__this, ___key, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m10012_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m10014_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m10014(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m10014_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m10016_gshared (Dictionary_2_t1563 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m10016(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1563 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m10016_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m10018_gshared (Dictionary_2_t1563 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m10018(__this, ___size, method) (( void (*) (Dictionary_2_t1563 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m10018_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m10020_gshared (Dictionary_2_t1563 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m10020(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1563 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m10020_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1565  Dictionary_2_make_pair_m10022_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m10022(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1565  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m10022_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m10024_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m10024(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m10024_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m10026_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2U5BU5D_t1710* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m10026(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1563 *, KeyValuePair_2U5BU5D_t1710*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m10026_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m10028_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m10028(__this, method) (( void (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_Resize_m10028_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m10030_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m10030(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m10030_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m10032_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m10032(__this, method) (( void (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_Clear_m10032_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m10034_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m10034(__this, ___key, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m10034_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m10036_gshared (Dictionary_2_t1563 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m10036(__this, ___value, method) (( bool (*) (Dictionary_2_t1563 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m10036_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m10038_gshared (Dictionary_2_t1563 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m10038(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1563 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2_GetObjectData_m10038_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m10040_gshared (Dictionary_2_t1563 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m10040(__this, ___sender, method) (( void (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m10040_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m10042_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m10042(__this, ___key, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m10042_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m10044_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m10044(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m10044_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1568 * Dictionary_2_get_Values_m10046_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m10046(__this, method) (( ValueCollection_t1568 * (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_get_Values_m10046_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m10048_gshared (Dictionary_2_t1563 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m10048(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m10048_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m10050_gshared (Dictionary_2_t1563 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m10050(__this, ___value, method) (( bool (*) (Dictionary_2_t1563 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m10050_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m10052_gshared (Dictionary_2_t1563 * __this, KeyValuePair_2_t1565  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m10052(__this, ___pair, method) (( bool (*) (Dictionary_2_t1563 *, KeyValuePair_2_t1565 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m10052_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1570  Dictionary_2_GetEnumerator_m10054_gshared (Dictionary_2_t1563 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m10054(__this, method) (( Enumerator_t1570  (*) (Dictionary_2_t1563 *, const MethodInfo*))Dictionary_2_GetEnumerator_m10054_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t479  Dictionary_2_U3CCopyToU3Em__0_m10056_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m10056(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t479  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m10056_gshared)(__this /* static, unused */, ___key, ___value, method)
