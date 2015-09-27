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

// System.MissingMethodException
struct MissingMethodException_t1292;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MissingMethodException::.ctor()
extern "C" void MissingMethodException__ctor_m7964 (MissingMethodException_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String)
extern "C" void MissingMethodException__ctor_m7965 (MissingMethodException_t1292 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MissingMethodException__ctor_m7966 (MissingMethodException_t1292 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MissingMethodException::.ctor(System.String,System.String)
extern "C" void MissingMethodException__ctor_m7967 (MissingMethodException_t1292 * __this, String_t* ___className, String_t* ___methodName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.MissingMethodException::get_Message()
extern "C" String_t* MissingMethodException_get_Message_m7968 (MissingMethodException_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
