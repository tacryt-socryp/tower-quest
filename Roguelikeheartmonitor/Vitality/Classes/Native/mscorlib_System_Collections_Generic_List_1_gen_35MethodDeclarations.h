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

// System.Collections.Generic.List`1<System.Object>
struct List_1_t345;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t369;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1975;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t2281;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t1714;
// System.Object[]
struct ObjectU5BU5D_t294;
// System.Predicate`1<System.Object>
struct Predicate_1_t1749;
// System.Comparison`1<System.Object>
struct Comparison_1_t1754;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m10556_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1__ctor_m10556(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1__ctor_m10556_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m10558_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m10558(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1__ctor_m10558_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m10560_gshared (List_1_t345 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m10560(__this, ___capacity, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1__ctor_m10560_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m10562_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m10562(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10562_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10564_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10564(__this, method) (( Object_t* (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10564_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m10566_gshared (List_1_t345 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m10566(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t345 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10566_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m10568_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10568(__this, method) (( Object_t * (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10568_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m10570_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m10570(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10570_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m10572_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m10572(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10572_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m10574_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m10574(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10574_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m10576_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m10576(__this, ___index, ___item, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10576_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m10578_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m10578(__this, ___item, method) (( void (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10578_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10580_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10580(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10580_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m10582_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10582(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10582_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m10584_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m10584(__this, method) (( Object_t * (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10584_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m10586_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m10586(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10586_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m10588_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m10588(__this, method) (( bool (*) (List_1_t345 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10588_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m10590_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m10590(__this, ___index, method) (( Object_t * (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10590_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m10592_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m10592(__this, ___index, ___value, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10592_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m10594_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m10594(__this, ___item, method) (( void (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Add_m10594_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m10596_gshared (List_1_t345 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m10596(__this, ___newCount, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10596_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m10598_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m10598(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10598_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m10600_gshared (List_1_t345 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m10600(__this, ___enumerable, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10600_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m10602_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m10602(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_AddRange_m10602_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1714 * List_1_AsReadOnly_m10604_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m10604(__this, method) (( ReadOnlyCollection_1_t1714 * (*) (List_1_t345 *, const MethodInfo*))List_1_AsReadOnly_m10604_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m10606_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Clear_m10606(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Clear_m10606_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m10608_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m10608(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Contains_m10608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m10610_gshared (List_1_t345 * __this, ObjectU5BU5D_t294* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m10610(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t345 *, ObjectU5BU5D_t294*, int32_t, const MethodInfo*))List_1_CopyTo_m10610_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
extern "C" Object_t * List_1_Find_m10612_gshared (List_1_t345 * __this, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define List_1_Find_m10612(__this, ___match, method) (( Object_t * (*) (List_1_t345 *, Predicate_1_t1749 *, const MethodInfo*))List_1_Find_m10612_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m10614_gshared (Object_t * __this /* static, unused */, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m10614(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1749 *, const MethodInfo*))List_1_CheckMatch_m10614_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m10616_gshared (List_1_t345 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m10616(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t345 *, int32_t, int32_t, Predicate_1_t1749 *, const MethodInfo*))List_1_GetIndex_m10616_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1746  List_1_GetEnumerator_m10618_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m10618(__this, method) (( Enumerator_t1746  (*) (List_1_t345 *, const MethodInfo*))List_1_GetEnumerator_m10618_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m10620_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m10620(__this, ___item, method) (( int32_t (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_IndexOf_m10620_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m10622_gshared (List_1_t345 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m10622(__this, ___start, ___delta, method) (( void (*) (List_1_t345 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10622_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m10624_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m10624(__this, ___index, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m10626_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m10626(__this, ___index, ___item, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m10626_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m10628_gshared (List_1_t345 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m10628(__this, ___collection, method) (( void (*) (List_1_t345 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10628_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m10630_gshared (List_1_t345 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m10630(__this, ___item, method) (( bool (*) (List_1_t345 *, Object_t *, const MethodInfo*))List_1_Remove_m10630_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m10632_gshared (List_1_t345 * __this, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m10632(__this, ___match, method) (( int32_t (*) (List_1_t345 *, Predicate_1_t1749 *, const MethodInfo*))List_1_RemoveAll_m10632_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m10634_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m10634(__this, ___index, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10634_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
extern "C" void List_1_Reverse_m10636_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Reverse_m10636(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Reverse_m10636_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
extern "C" void List_1_Sort_m10638_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_Sort_m10638(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_Sort_m10638_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m10640_gshared (List_1_t345 * __this, Comparison_1_t1754 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m10640(__this, ___comparison, method) (( void (*) (List_1_t345 *, Comparison_1_t1754 *, const MethodInfo*))List_1_Sort_m10640_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t294* List_1_ToArray_m10642_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_ToArray_m10642(__this, method) (( ObjectU5BU5D_t294* (*) (List_1_t345 *, const MethodInfo*))List_1_ToArray_m10642_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
extern "C" void List_1_TrimExcess_m10644_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m10644(__this, method) (( void (*) (List_1_t345 *, const MethodInfo*))List_1_TrimExcess_m10644_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m10646_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m10646(__this, method) (( int32_t (*) (List_1_t345 *, const MethodInfo*))List_1_get_Capacity_m10646_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m10648_gshared (List_1_t345 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m10648(__this, ___value, method) (( void (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10648_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m10650_gshared (List_1_t345 * __this, const MethodInfo* method);
#define List_1_get_Count_m10650(__this, method) (( int32_t (*) (List_1_t345 *, const MethodInfo*))List_1_get_Count_m10650_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m10652_gshared (List_1_t345 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m10652(__this, ___index, method) (( Object_t * (*) (List_1_t345 *, int32_t, const MethodInfo*))List_1_get_Item_m10652_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m10654_gshared (List_1_t345 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m10654(__this, ___index, ___value, method) (( void (*) (List_1_t345 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m10654_gshared)(__this, ___index, ___value, method)
