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
struct List_1_t1427;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1686;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t209;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_1.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" void List_1__ctor_m8432_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1__ctor_m8432(__this, method) (( void (*) (List_1_t1427 *, const MethodInfo*))List_1__ctor_m8432_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
extern "C" void List_1__ctor_m8434_gshared (List_1_t1427 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m8434(__this, ___capacity, method) (( void (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1__ctor_m8434_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
extern "C" void List_1__cctor_m8436_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m8436(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m8436_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8438_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8438(__this, method) (( Object_t* (*) (List_1_t1427 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m8440_gshared (List_1_t1427 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m8440(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1427 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m8440_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m8442_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m8442(__this, method) (( Object_t * (*) (List_1_t1427 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m8442_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m8444_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m8444(__this, ___item, method) (( int32_t (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m8444_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m8446_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m8446(__this, ___item, method) (( bool (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m8446_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m8448_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m8448(__this, ___item, method) (( int32_t (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m8448_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m8450_gshared (List_1_t1427 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m8450(__this, ___index, ___item, method) (( void (*) (List_1_t1427 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m8450_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m8452_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m8452(__this, ___item, method) (( void (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m8452_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8454_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8454(__this, method) (( bool (*) (List_1_t1427 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m8454_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m8456_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m8456(__this, method) (( Object_t * (*) (List_1_t1427 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m8456_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m8458_gshared (List_1_t1427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m8458(__this, ___index, method) (( Object_t * (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m8458_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m8460_gshared (List_1_t1427 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m8460(__this, ___index, ___value, method) (( void (*) (List_1_t1427 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m8460_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
extern "C" void List_1_Add_m8462_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Add_m8462(__this, ___item, method) (( void (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_Add_m8462_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m8464_gshared (List_1_t1427 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m8464(__this, ___newCount, method) (( void (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m8464_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" void List_1_Clear_m8466_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_Clear_m8466(__this, method) (( void (*) (List_1_t1427 *, const MethodInfo*))List_1_Clear_m8466_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
extern "C" bool List_1_Contains_m8468_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Contains_m8468(__this, ___item, method) (( bool (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_Contains_m8468_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m8470_gshared (List_1_t1427 * __this, ObjectU5BU5D_t209* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m8470(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t1427 *, ObjectU5BU5D_t209*, int32_t, const MethodInfo*))List_1_CopyTo_m8470_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1428  List_1_GetEnumerator_m8471_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m8471(__this, method) (( Enumerator_t1428  (*) (List_1_t1427 *, const MethodInfo*))List_1_GetEnumerator_m8471_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m8473_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_IndexOf_m8473(__this, ___item, method) (( int32_t (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_IndexOf_m8473_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m8475_gshared (List_1_t1427 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m8475(__this, ___start, ___delta, method) (( void (*) (List_1_t1427 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m8475_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m8477_gshared (List_1_t1427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m8477(__this, ___index, method) (( void (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_CheckIndex_m8477_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m8479_gshared (List_1_t1427 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_Insert_m8479(__this, ___index, ___item, method) (( void (*) (List_1_t1427 *, int32_t, Object_t *, const MethodInfo*))List_1_Insert_m8479_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
extern "C" bool List_1_Remove_m8481_gshared (List_1_t1427 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_Remove_m8481(__this, ___item, method) (( bool (*) (List_1_t1427 *, Object_t *, const MethodInfo*))List_1_Remove_m8481_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m8483_gshared (List_1_t1427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m8483(__this, ___index, method) (( void (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_RemoveAt_m8483_gshared)(__this, ___index, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" ObjectU5BU5D_t209* List_1_ToArray_m8485_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_ToArray_m8485(__this, method) (( ObjectU5BU5D_t209* (*) (List_1_t1427 *, const MethodInfo*))List_1_ToArray_m8485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m8487_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m8487(__this, method) (( int32_t (*) (List_1_t1427 *, const MethodInfo*))List_1_get_Capacity_m8487_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m8489_gshared (List_1_t1427 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m8489(__this, ___value, method) (( void (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_set_Capacity_m8489_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" int32_t List_1_get_Count_m8491_gshared (List_1_t1427 * __this, const MethodInfo* method);
#define List_1_get_Count_m8491(__this, method) (( int32_t (*) (List_1_t1427 *, const MethodInfo*))List_1_get_Count_m8491_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * List_1_get_Item_m8493_gshared (List_1_t1427 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m8493(__this, ___index, method) (( Object_t * (*) (List_1_t1427 *, int32_t, const MethodInfo*))List_1_get_Item_m8493_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m8495_gshared (List_1_t1427 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_set_Item_m8495(__this, ___index, ___value, method) (( void (*) (List_1_t1427 *, int32_t, Object_t *, const MethodInfo*))List_1_set_Item_m8495_gshared)(__this, ___index, ___value, method)
