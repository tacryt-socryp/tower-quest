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

// System.IFormatProvider
struct IFormatProvider_t1347;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t151;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_Decimal.h"
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool UInt32_System_IConvertible_ToBoolean_m3302 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t UInt32_System_IConvertible_ToByte_m3303 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToChar_m3304 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t132  UInt32_System_IConvertible_ToDateTime_m3305 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t298  UInt32_System_IConvertible_ToDecimal_m3306 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double UInt32_System_IConvertible_ToDouble_m3307 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t UInt32_System_IConvertible_ToInt16_m3308 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t UInt32_System_IConvertible_ToInt32_m3309 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t UInt32_System_IConvertible_ToInt64_m3310 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t UInt32_System_IConvertible_ToSByte_m3311 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float UInt32_System_IConvertible_ToSingle_m3312 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * UInt32_System_IConvertible_ToType_m3313 (uint32_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToUInt16_m3314 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t UInt32_System_IConvertible_ToUInt32_m3315 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t UInt32_System_IConvertible_ToUInt64_m3316 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" int32_t UInt32_CompareTo_m3317 (uint32_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" bool UInt32_Equals_m3318 (uint32_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::GetHashCode()
extern "C" int32_t UInt32_GetHashCode_m3319 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" int32_t UInt32_CompareTo_m3320 (uint32_t* __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" bool UInt32_Equals_m3321 (uint32_t* __this, uint32_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m3322 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, uint32_t* ___result, Exception_t151 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m3323 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint32_t* ___result, Exception_t151 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m3324 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m3325 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" bool UInt32_TryParse_m2232 (Object_t * __this /* static, unused */, String_t* ___s, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" bool UInt32_TryParse_m3326 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C" String_t* UInt32_ToString_m3327 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m3328 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String)
extern "C" String_t* UInt32_ToString_m3329 (uint32_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m3330 (uint32_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
