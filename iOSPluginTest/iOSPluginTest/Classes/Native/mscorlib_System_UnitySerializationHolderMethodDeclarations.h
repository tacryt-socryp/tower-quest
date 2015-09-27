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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1318;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t236;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1259;
// System.Reflection.Module
struct Module_t896;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m8257 (UnitySerializationHolder_t1318 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m8258 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t236 * ___info, StreamingContext_t237  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m8259 (Object_t * __this /* static, unused */, DBNull_t1259 * ___instance, SerializationInfo_t236 * ___info, StreamingContext_t237  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m8260 (Object_t * __this /* static, unused */, Module_t896 * ___instance, SerializationInfo_t236 * ___info, StreamingContext_t237  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m8261 (UnitySerializationHolder_t1318 * __this, SerializationInfo_t236 * ___info, StreamingContext_t237  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m8262 (UnitySerializationHolder_t1318 * __this, StreamingContext_t237  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
