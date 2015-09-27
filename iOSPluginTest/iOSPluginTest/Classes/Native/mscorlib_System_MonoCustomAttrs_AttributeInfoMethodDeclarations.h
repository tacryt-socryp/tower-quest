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

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t1294;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t684;

#include "codegen/il2cpp-codegen.h"

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C" void AttributeInfo__ctor_m7970 (AttributeInfo_t1294 * __this, AttributeUsageAttribute_t684 * ___usage, int32_t ___inheritanceLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C" AttributeUsageAttribute_t684 * AttributeInfo_get_Usage_m7971 (AttributeInfo_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C" int32_t AttributeInfo_get_InheritanceLevel_m7972 (AttributeInfo_t1294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
