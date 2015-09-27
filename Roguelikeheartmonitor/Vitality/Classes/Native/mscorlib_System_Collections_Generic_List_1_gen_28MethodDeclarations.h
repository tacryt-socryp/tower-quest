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

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t470;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2326;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2327;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2328;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2093;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t555;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2097;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2100;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UICharInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_30.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m15242_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1__ctor_m15242(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1__ctor_m15242_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m15243_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m15243(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1__ctor_m15243_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3023_gshared (List_1_t470 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3023(__this, ___capacity, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1__ctor_m3023_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m15244_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m15244(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m15244_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15245_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15245(__this, method) (( Object_t* (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15245_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m15246_gshared (List_1_t470 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m15246(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m15246_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m15247_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m15247(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m15247_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m15248_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m15248(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m15248_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m15249_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m15249(__this, ___item, method) (( bool (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m15249_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m15250_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m15250(__this, ___item, method) (( int32_t (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m15250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m15251_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m15251(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m15251_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m15252_gshared (List_1_t470 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m15252(__this, ___item, method) (( void (*) (List_1_t470 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m15252_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15253_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15253(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m15253_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m15254_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m15254(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m15254_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m15255_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m15255(__this, method) (( Object_t * (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m15255_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m15256_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m15256(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m15256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m15257_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m15257(__this, method) (( bool (*) (List_1_t470 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m15257_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m15258_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m15258(__this, ___index, method) (( Object_t * (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m15258_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m15259_gshared (List_1_t470 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m15259(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m15259_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m15260_gshared (List_1_t470 * __this, UICharInfo_t338  ___item, const MethodInfo* method);
#define List_1_Add_m15260(__this, ___item, method) (( void (*) (List_1_t470 *, UICharInfo_t338 , const MethodInfo*))List_1_Add_m15260_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m15261_gshared (List_1_t470 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m15261(__this, ___newCount, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m15261_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m15262_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m15262(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddCollection_m15262_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m15263_gshared (List_1_t470 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m15263(__this, ___enumerable, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m15263_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m15264_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m15264(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_AddRange_m15264_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2093 * List_1_AsReadOnly_m15265_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m15265(__this, method) (( ReadOnlyCollection_1_t2093 * (*) (List_1_t470 *, const MethodInfo*))List_1_AsReadOnly_m15265_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m15266_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Clear_m15266(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Clear_m15266_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m15267_gshared (List_1_t470 * __this, UICharInfo_t338  ___item, const MethodInfo* method);
#define List_1_Contains_m15267(__this, ___item, method) (( bool (*) (List_1_t470 *, UICharInfo_t338 , const MethodInfo*))List_1_Contains_m15267_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m15268_gshared (List_1_t470 * __this, UICharInfoU5BU5D_t555* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m15268(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t470 *, UICharInfoU5BU5D_t555*, int32_t, const MethodInfo*))List_1_CopyTo_m15268_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t338  List_1_Find_m15269_gshared (List_1_t470 * __this, Predicate_1_t2097 * ___match, const MethodInfo* method);
#define List_1_Find_m15269(__this, ___match, method) (( UICharInfo_t338  (*) (List_1_t470 *, Predicate_1_t2097 *, const MethodInfo*))List_1_Find_m15269_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m15270_gshared (Object_t * __this /* static, unused */, Predicate_1_t2097 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m15270(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2097 *, const MethodInfo*))List_1_CheckMatch_m15270_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m15271_gshared (List_1_t470 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2097 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m15271(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t470 *, int32_t, int32_t, Predicate_1_t2097 *, const MethodInfo*))List_1_GetIndex_m15271_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2092  List_1_GetEnumerator_m15272_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m15272(__this, method) (( Enumerator_t2092  (*) (List_1_t470 *, const MethodInfo*))List_1_GetEnumerator_m15272_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m15273_gshared (List_1_t470 * __this, UICharInfo_t338  ___item, const MethodInfo* method);
#define List_1_IndexOf_m15273(__this, ___item, method) (( int32_t (*) (List_1_t470 *, UICharInfo_t338 , const MethodInfo*))List_1_IndexOf_m15273_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m15274_gshared (List_1_t470 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m15274(__this, ___start, ___delta, method) (( void (*) (List_1_t470 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m15274_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m15275_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m15275(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_CheckIndex_m15275_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m15276_gshared (List_1_t470 * __this, int32_t ___index, UICharInfo_t338  ___item, const MethodInfo* method);
#define List_1_Insert_m15276(__this, ___index, ___item, method) (( void (*) (List_1_t470 *, int32_t, UICharInfo_t338 , const MethodInfo*))List_1_Insert_m15276_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m15277_gshared (List_1_t470 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m15277(__this, ___collection, method) (( void (*) (List_1_t470 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m15277_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m15278_gshared (List_1_t470 * __this, UICharInfo_t338  ___item, const MethodInfo* method);
#define List_1_Remove_m15278(__this, ___item, method) (( bool (*) (List_1_t470 *, UICharInfo_t338 , const MethodInfo*))List_1_Remove_m15278_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m15279_gshared (List_1_t470 * __this, Predicate_1_t2097 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m15279(__this, ___match, method) (( int32_t (*) (List_1_t470 *, Predicate_1_t2097 *, const MethodInfo*))List_1_RemoveAll_m15279_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m15280_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m15280(__this, ___index, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_RemoveAt_m15280_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m15281_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Reverse_m15281(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Reverse_m15281_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m15282_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_Sort_m15282(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_Sort_m15282_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m15283_gshared (List_1_t470 * __this, Comparison_1_t2100 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m15283(__this, ___comparison, method) (( void (*) (List_1_t470 *, Comparison_1_t2100 *, const MethodInfo*))List_1_Sort_m15283_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t555* List_1_ToArray_m15284_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_ToArray_m15284(__this, method) (( UICharInfoU5BU5D_t555* (*) (List_1_t470 *, const MethodInfo*))List_1_ToArray_m15284_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m15285_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m15285(__this, method) (( void (*) (List_1_t470 *, const MethodInfo*))List_1_TrimExcess_m15285_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m15286_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m15286(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Capacity_m15286_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m15287_gshared (List_1_t470 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m15287(__this, ___value, method) (( void (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_set_Capacity_m15287_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m15288_gshared (List_1_t470 * __this, const MethodInfo* method);
#define List_1_get_Count_m15288(__this, method) (( int32_t (*) (List_1_t470 *, const MethodInfo*))List_1_get_Count_m15288_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t338  List_1_get_Item_m15289_gshared (List_1_t470 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m15289(__this, ___index, method) (( UICharInfo_t338  (*) (List_1_t470 *, int32_t, const MethodInfo*))List_1_get_Item_m15289_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m15290_gshared (List_1_t470 * __this, int32_t ___index, UICharInfo_t338  ___value, const MethodInfo* method);
#define List_1_set_Item_m15290(__this, ___index, ___value, method) (( void (*) (List_1_t470 *, int32_t, UICharInfo_t338 , const MethodInfo*))List_1_set_Item_m15290_gshared)(__this, ___index, ___value, method)
