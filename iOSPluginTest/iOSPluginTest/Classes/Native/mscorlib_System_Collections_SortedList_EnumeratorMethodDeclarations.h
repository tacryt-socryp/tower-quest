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

// System.Collections.SortedList/Enumerator
struct Enumerator_t811;
// System.Collections.SortedList
struct SortedList_t500;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.SortedList/Enumerator::.ctor(System.Collections.SortedList,System.Collections.SortedList/EnumeratorMode)
extern "C" void Enumerator__ctor_m4850 (Enumerator_t811 * __this, SortedList_t500 * ___host, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::.cctor()
extern "C" void Enumerator__cctor_m4851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList/Enumerator::Reset()
extern "C" void Enumerator_Reset_m4852 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList/Enumerator::MoveNext()
extern "C" bool Enumerator_MoveNext_m4853 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.SortedList/Enumerator::get_Entry()
extern "C" DictionaryEntry_t479  Enumerator_get_Entry_m4854 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Key()
extern "C" Object_t * Enumerator_get_Key_m4855 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Value()
extern "C" Object_t * Enumerator_get_Value_m4856 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::get_Current()
extern "C" Object_t * Enumerator_get_Current_m4857 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList/Enumerator::Clone()
extern "C" Object_t * Enumerator_Clone_m4858 (Enumerator_t811 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
