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

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1848;
// System.Collections.IEnumerator
struct IEnumerator_t279;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1975;
// System.Object[]
struct ObjectU5BU5D_t294;
// System.Predicate`1<System.Object>
struct Predicate_1_t1749;
// System.Comparison`1<System.Object>
struct Comparison_1_t1754;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11989_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11989(__this, method) (( void (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1__ctor_m11989_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11991_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11991(__this, method) (( Object_t * (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11991_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11993_gshared (IndexedSet_1_t1848 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11993(__this, ___item, method) (( void (*) (IndexedSet_1_t1848 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11993_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11995_gshared (IndexedSet_1_t1848 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11995(__this, ___item, method) (( bool (*) (IndexedSet_1_t1848 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11995_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11997_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11997(__this, method) (( Object_t* (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11997_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11999_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11999(__this, method) (( void (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1_Clear_m11999_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m12001_gshared (IndexedSet_1_t1848 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m12001(__this, ___item, method) (( bool (*) (IndexedSet_1_t1848 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m12001_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m12003_gshared (IndexedSet_1_t1848 * __this, ObjectU5BU5D_t294* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m12003(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1848 *, ObjectU5BU5D_t294*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m12003_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m12005_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m12005(__this, method) (( int32_t (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1_get_Count_m12005_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m12007_gshared (IndexedSet_1_t1848 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m12007(__this, method) (( bool (*) (IndexedSet_1_t1848 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m12007_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m12009_gshared (IndexedSet_1_t1848 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m12009(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1848 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m12009_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m12011_gshared (IndexedSet_1_t1848 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m12011(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1848 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m12011_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m12013_gshared (IndexedSet_1_t1848 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m12013(__this, ___index, method) (( void (*) (IndexedSet_1_t1848 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m12013_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m12015_gshared (IndexedSet_1_t1848 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m12015(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1848 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m12015_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m12017_gshared (IndexedSet_1_t1848 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m12017(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1848 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m12017_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m12018_gshared (IndexedSet_1_t1848 * __this, Predicate_1_t1749 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m12018(__this, ___match, method) (( void (*) (IndexedSet_1_t1848 *, Predicate_1_t1749 *, const MethodInfo*))IndexedSet_1_RemoveAll_m12018_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m12019_gshared (IndexedSet_1_t1848 * __this, Comparison_1_t1754 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m12019(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1848 *, Comparison_1_t1754 *, const MethodInfo*))IndexedSet_1_Sort_m12019_gshared)(__this, ___sortLayoutFunction, method)
