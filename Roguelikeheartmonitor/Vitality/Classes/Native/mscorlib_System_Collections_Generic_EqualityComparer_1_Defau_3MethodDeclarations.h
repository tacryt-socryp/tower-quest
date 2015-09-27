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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t1997;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m14214_gshared (DefaultComparer_t1997 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m14214(__this, method) (( void (*) (DefaultComparer_t1997 *, const MethodInfo*))DefaultComparer__ctor_m14214_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m14215_gshared (DefaultComparer_t1997 * __this, Vector3_t19  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m14215(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1997 *, Vector3_t19 , const MethodInfo*))DefaultComparer_GetHashCode_m14215_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.Vector3>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m14216_gshared (DefaultComparer_t1997 * __this, Vector3_t19  ___x, Vector3_t19  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m14216(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1997 *, Vector3_t19 , Vector3_t19 , const MethodInfo*))DefaultComparer_Equals_m14216_gshared)(__this, ___x, ___y, method)
