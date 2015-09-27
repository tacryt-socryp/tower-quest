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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1448;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m8642_gshared (DefaultComparer_t1448 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m8642(__this, method) (( void (*) (DefaultComparer_t1448 *, const MethodInfo*))DefaultComparer__ctor_m8642_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m8643_gshared (DefaultComparer_t1448 * __this, UIVertex_t122  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m8643(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1448 *, UIVertex_t122 , const MethodInfo*))DefaultComparer_GetHashCode_m8643_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m8644_gshared (DefaultComparer_t1448 * __this, UIVertex_t122  ___x, UIVertex_t122  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m8644(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1448 *, UIVertex_t122 , UIVertex_t122 , const MethodInfo*))DefaultComparer_Equals_m8644_gshared)(__this, ___x, ___y, method)
