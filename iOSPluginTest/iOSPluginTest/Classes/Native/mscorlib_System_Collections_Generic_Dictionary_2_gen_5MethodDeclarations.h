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
struct Dictionary_2_t1484;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1483;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1696;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1697;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t478;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1488;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m8978_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m8978(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2__ctor_m8978_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m8980_gshared (Dictionary_2_t1484 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m8980(__this, ___comparer, method) (( void (*) (Dictionary_2_t1484 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m8980_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m8982_gshared (Dictionary_2_t1484 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m8982(__this, ___capacity, method) (( void (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m8982_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m8984_gshared (Dictionary_2_t1484 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m8984(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1484 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2__ctor_m8984_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m8986_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m8986(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m8986_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m8988_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m8988(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m8988_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m8990_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m8990(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m8990_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m8992_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m8992(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m8992_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m8994_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m8994(__this, ___key, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m8994_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8996_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8996(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m8996_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8998_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8998(__this, method) (( bool (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m8998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9000_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9000(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m9000_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9002_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9002(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m9002_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9004_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2U5BU5D_t1696* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9004(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2U5BU5D_t1696*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m9004_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9006_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9006(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m9006_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m9008_gshared (Dictionary_2_t1484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m9008(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m9008_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9010_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9010(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m9010_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9012_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9012(__this, method) (( Object_t* (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m9012_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9014_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9014(__this, method) (( Object_t * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m9014_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m9016_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m9016(__this, method) (( int32_t (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_get_Count_m9016_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m9018_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m9018(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m9018_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m9020_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m9020(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m9020_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m9022_gshared (Dictionary_2_t1484 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m9022(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m9022_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m9024_gshared (Dictionary_2_t1484 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m9024(__this, ___size, method) (( void (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m9024_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m9026_gshared (Dictionary_2_t1484 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m9026(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m9026_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1486  Dictionary_2_make_pair_m9028_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m9028(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1486  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m9028_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m9030_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m9030(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m9030_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m9032_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2U5BU5D_t1696* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m9032(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1484 *, KeyValuePair_2U5BU5D_t1696*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m9032_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m9034_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m9034(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_Resize_m9034_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m9036_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m9036(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1484 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m9036_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m9038_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m9038(__this, method) (( void (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_Clear_m9038_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m9040_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m9040(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m9040_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m9042_gshared (Dictionary_2_t1484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m9042(__this, ___value, method) (( bool (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m9042_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m9044_gshared (Dictionary_2_t1484 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m9044(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1484 *, SerializationInfo_t236 *, StreamingContext_t237 , const MethodInfo*))Dictionary_2_GetObjectData_m9044_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m9046_gshared (Dictionary_2_t1484 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m9046(__this, ___sender, method) (( void (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m9046_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m9048_gshared (Dictionary_2_t1484 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m9048(__this, ___key, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m9048_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m9050_gshared (Dictionary_2_t1484 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m9050(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1484 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m9050_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1488 * Dictionary_2_get_Values_m9052_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m9052(__this, method) (( ValueCollection_t1488 * (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_get_Values_m9052_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m9054_gshared (Dictionary_2_t1484 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m9054(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m9054_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m9056_gshared (Dictionary_2_t1484 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m9056(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1484 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m9056_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m9058_gshared (Dictionary_2_t1484 * __this, KeyValuePair_2_t1486  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m9058(__this, ___pair, method) (( bool (*) (Dictionary_2_t1484 *, KeyValuePair_2_t1486 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m9058_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1490  Dictionary_2_GetEnumerator_m9060_gshared (Dictionary_2_t1484 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m9060(__this, method) (( Enumerator_t1490  (*) (Dictionary_2_t1484 *, const MethodInfo*))Dictionary_2_GetEnumerator_m9060_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t479  Dictionary_2_U3CCopyToU3Em__0_m9062_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m9062(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t479  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m9062_gshared)(__this /* static, unused */, ___key, ___value, method)
