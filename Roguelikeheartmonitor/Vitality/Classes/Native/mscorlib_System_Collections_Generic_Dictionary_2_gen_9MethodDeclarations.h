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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1889;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1722;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t559;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2294;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2295;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t772;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1893;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12453_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12453(__this, method) (( void (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2__ctor_m12453_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12455_gshared (Dictionary_2_t1889 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12455(__this, ___comparer, method) (( void (*) (Dictionary_2_t1889 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12455_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12457_gshared (Dictionary_2_t1889 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12457(__this, ___capacity, method) (( void (*) (Dictionary_2_t1889 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12457_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12459_gshared (Dictionary_2_t1889 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12459(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1889 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2__ctor_m12459_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12461_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12461(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12461_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12463_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12463(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12463_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12465_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12465(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12465_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12467_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12467(__this, ___key, method) (( bool (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12467_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12469_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12469(__this, ___key, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12469_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12471_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12471(__this, method) (( bool (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12471_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12473_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12473(__this, method) (( Object_t * (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12473_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12475_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12475(__this, method) (( bool (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12475_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12477_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2_t1891  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12477(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1889 *, KeyValuePair_2_t1891 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12477_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12479_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2_t1891  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12479(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1889 *, KeyValuePair_2_t1891 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12479_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12481_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2U5BU5D_t2294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12481(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1889 *, KeyValuePair_2U5BU5D_t2294*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12481_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12483_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2_t1891  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12483(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1889 *, KeyValuePair_2_t1891 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12483_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12485_gshared (Dictionary_2_t1889 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12485(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1889 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12485_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12487_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12487(__this, method) (( Object_t * (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12487_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12489_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12489(__this, method) (( Object_t* (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12489_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12491_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12491(__this, method) (( Object_t * (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12491_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12493_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12493(__this, method) (( int32_t (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_get_Count_m12493_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12495_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12495(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12495_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12497_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12497(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12497_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12499_gshared (Dictionary_2_t1889 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12499(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1889 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12499_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12501_gshared (Dictionary_2_t1889 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12501(__this, ___size, method) (( void (*) (Dictionary_2_t1889 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12501_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12503_gshared (Dictionary_2_t1889 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12503(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1889 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12503_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1891  Dictionary_2_make_pair_m12505_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12505(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1891  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12505_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12507_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12507(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12507_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12509_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2U5BU5D_t2294* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12509(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1889 *, KeyValuePair_2U5BU5D_t2294*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12509_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12511_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12511(__this, method) (( void (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_Resize_m12511_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12513_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12513(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12513_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12515_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12515(__this, method) (( void (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_Clear_m12515_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12517_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12517(__this, ___key, method) (( bool (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12517_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12519_gshared (Dictionary_2_t1889 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12519(__this, ___value, method) (( bool (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12519_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12521_gshared (Dictionary_2_t1889 * __this, SerializationInfo_t559 * ___info, StreamingContext_t560  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12521(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1889 *, SerializationInfo_t559 *, StreamingContext_t560 , const MethodInfo*))Dictionary_2_GetObjectData_m12521_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12523_gshared (Dictionary_2_t1889 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12523(__this, ___sender, method) (( void (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12523_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12525_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12525(__this, ___key, method) (( bool (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12525_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12527_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12527(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1889 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12527_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1893 * Dictionary_2_get_Values_m12529_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12529(__this, method) (( ValueCollection_t1893 * (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_get_Values_m12529_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12531_gshared (Dictionary_2_t1889 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12531(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12531_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12533_gshared (Dictionary_2_t1889 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12533(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1889 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12533_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12535_gshared (Dictionary_2_t1889 * __this, KeyValuePair_2_t1891  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12535(__this, ___pair, method) (( bool (*) (Dictionary_2_t1889 *, KeyValuePair_2_t1891 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12535_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1895  Dictionary_2_GetEnumerator_m12537_gshared (Dictionary_2_t1889 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12537(__this, method) (( Enumerator_t1895  (*) (Dictionary_2_t1889 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12537_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t962  Dictionary_2_U3CCopyToU3Em__0_m12539_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12539(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t962  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12539_gshared)(__this /* static, unused */, ___key, ___value, method)
