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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_75.h"
#include "mscorlib_System_Reflection_Emit_ILTokenInfo.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m10510_gshared (InternalEnumerator_1_t1629 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m10510(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1629 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m10510_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10511_gshared (InternalEnumerator_1_t1629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10511(__this, method) (( void (*) (InternalEnumerator_1_t1629 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m10511_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10512_gshared (InternalEnumerator_1_t1629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10512(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1629 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m10512_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m10513_gshared (InternalEnumerator_1_t1629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m10513(__this, method) (( void (*) (InternalEnumerator_1_t1629 *, const MethodInfo*))InternalEnumerator_1_Dispose_m10513_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m10514_gshared (InternalEnumerator_1_t1629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m10514(__this, method) (( bool (*) (InternalEnumerator_1_t1629 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m10514_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILTokenInfo>::get_Current()
extern "C" ILTokenInfo_t890  InternalEnumerator_1_get_Current_m10515_gshared (InternalEnumerator_1_t1629 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m10515(__this, method) (( ILTokenInfo_t890  (*) (InternalEnumerator_1_t1629 *, const MethodInfo*))InternalEnumerator_1_get_Current_m10515_gshared)(__this, method)
