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

// System.Collections.CollectionBase
struct CollectionBase_t372;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t224;
// System.Collections.ArrayList
struct ArrayList_t313;
// System.Collections.IList
struct IList_t438;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.CollectionBase::.ctor()
extern "C" void CollectionBase__ctor_m2175 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void CollectionBase_System_Collections_ICollection_CopyTo_m4744 (CollectionBase_t372 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m4745 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_Add_m4746 (CollectionBase_t372 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C" bool CollectionBase_System_Collections_IList_Contains_m4747 (CollectionBase_t372 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t CollectionBase_System_Collections_IList_IndexOf_m4748 (CollectionBase_t372 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_Insert_m4749 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C" void CollectionBase_System_Collections_IList_Remove_m4750 (CollectionBase_t372 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * CollectionBase_System_Collections_IList_get_Item_m4751 (CollectionBase_t372 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void CollectionBase_System_Collections_IList_set_Item_m4752 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C" int32_t CollectionBase_get_Count_m4753 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C" Object_t * CollectionBase_GetEnumerator_m4754 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C" void CollectionBase_Clear_m4755 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C" void CollectionBase_RemoveAt_m4756 (CollectionBase_t372 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C" ArrayList_t313 * CollectionBase_get_InnerList_m2169 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C" Object_t * CollectionBase_get_List_m2228 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C" void CollectionBase_OnClear_m4757 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C" void CollectionBase_OnClearComplete_m4758 (CollectionBase_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsert_m4759 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnInsertComplete_m4760 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemove_m4761 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C" void CollectionBase_OnRemoveComplete_m4762 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSet_m4763 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C" void CollectionBase_OnSetComplete_m4764 (CollectionBase_t372 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C" void CollectionBase_OnValidate_m4765 (CollectionBase_t372 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
