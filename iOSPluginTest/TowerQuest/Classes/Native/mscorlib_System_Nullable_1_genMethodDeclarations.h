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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m8350_gshared (Nullable_1_t1367 * __this, TimeSpan_t382  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m8350(__this, ___value, method) (( void (*) (Nullable_1_t1367 *, TimeSpan_t382 , const MethodInfo*))Nullable_1__ctor_m8350_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m8351_gshared (Nullable_1_t1367 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m8351(__this, method) (( bool (*) (Nullable_1_t1367 *, const MethodInfo*))Nullable_1_get_HasValue_m8351_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t382  Nullable_1_get_Value_m8352_gshared (Nullable_1_t1367 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m8352(__this, method) (( TimeSpan_t382  (*) (Nullable_1_t1367 *, const MethodInfo*))Nullable_1_get_Value_m8352_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m10979_gshared (Nullable_1_t1367 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m10979(__this, ___other, method) (( bool (*) (Nullable_1_t1367 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m10979_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m10980_gshared (Nullable_1_t1367 * __this, Nullable_1_t1367  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m10980(__this, ___other, method) (( bool (*) (Nullable_1_t1367 *, Nullable_1_t1367 , const MethodInfo*))Nullable_1_Equals_m10980_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m10981_gshared (Nullable_1_t1367 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m10981(__this, method) (( int32_t (*) (Nullable_1_t1367 *, const MethodInfo*))Nullable_1_GetHashCode_m10981_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m10982_gshared (Nullable_1_t1367 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m10982(__this, method) (( String_t* (*) (Nullable_1_t1367 *, const MethodInfo*))Nullable_1_ToString_m10982_gshared)(__this, method)
