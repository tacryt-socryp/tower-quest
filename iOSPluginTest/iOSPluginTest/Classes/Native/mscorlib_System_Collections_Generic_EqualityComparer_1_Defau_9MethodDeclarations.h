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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t1676;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m10982_gshared (DefaultComparer_t1676 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10982(__this, method) (( void (*) (DefaultComparer_t1676 *, const MethodInfo*))DefaultComparer__ctor_m10982_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10983_gshared (DefaultComparer_t1676 * __this, DateTimeOffset_t1262  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10983(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1676 *, DateTimeOffset_t1262 , const MethodInfo*))DefaultComparer_GetHashCode_m10983_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10984_gshared (DefaultComparer_t1676 * __this, DateTimeOffset_t1262  ___x, DateTimeOffset_t1262  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10984(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1676 *, DateTimeOffset_t1262 , DateTimeOffset_t1262 , const MethodInfo*))DefaultComparer_Equals_m10984_gshared)(__this, ___x, ___y, method)
