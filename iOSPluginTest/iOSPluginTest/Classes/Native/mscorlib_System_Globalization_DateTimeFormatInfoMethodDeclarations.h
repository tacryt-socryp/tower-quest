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

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t828;
// System.IFormatProvider
struct IFormatProvider_t1347;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t180;
// System.Globalization.Calendar
struct Calendar_t822;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
extern "C" void DateTimeFormatInfo__ctor_m5015 (DateTimeFormatInfo_t828 * __this, bool ___read_only, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
extern "C" void DateTimeFormatInfo__ctor_m5016 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
extern "C" void DateTimeFormatInfo__cctor_m5017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
extern "C" DateTimeFormatInfo_t828 * DateTimeFormatInfo_GetInstance_m5018 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
extern "C" bool DateTimeFormatInfo_get_IsReadOnly_m5019 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
extern "C" DateTimeFormatInfo_t828 * DateTimeFormatInfo_ReadOnly_m5020 (Object_t * __this /* static, unused */, DateTimeFormatInfo_t828 * ___dtfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
extern "C" Object_t * DateTimeFormatInfo_Clone_m5021 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
extern "C" Object_t * DateTimeFormatInfo_GetFormat_m5022 (DateTimeFormatInfo_t828 * __this, Type_t * ___formatType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m5023 (DateTimeFormatInfo_t828 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetEraName_m5024 (DateTimeFormatInfo_t828 * __this, int32_t ___era, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
extern "C" String_t* DateTimeFormatInfo_GetMonthName_m5025 (DateTimeFormatInfo_t828 * __this, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m5026 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m5027 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_get_RawDayNames_m5028 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_get_RawMonthNames_m5029 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_AMDesignator_m5030 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
extern "C" String_t* DateTimeFormatInfo_get_PMDesignator_m5031 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
extern "C" String_t* DateTimeFormatInfo_get_DateSeparator_m5032 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
extern "C" String_t* DateTimeFormatInfo_get_TimeSeparator_m5033 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongDatePattern_m5034 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortDatePattern_m5035 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_ShortTimePattern_m5036 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_LongTimePattern_m5037 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
extern "C" String_t* DateTimeFormatInfo_get_MonthDayPattern_m5038 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
extern "C" String_t* DateTimeFormatInfo_get_YearMonthPattern_m5039 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_FullDateTimePattern_m5040 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
extern "C" DateTimeFormatInfo_t828 * DateTimeFormatInfo_get_CurrentInfo_m5041 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
extern "C" DateTimeFormatInfo_t828 * DateTimeFormatInfo_get_InvariantInfo_m5042 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
extern "C" Calendar_t822 * DateTimeFormatInfo_get_Calendar_m5043 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
extern "C" void DateTimeFormatInfo_set_Calendar_m5044 (DateTimeFormatInfo_t828 * __this, Calendar_t822 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
extern "C" String_t* DateTimeFormatInfo_get_RFC1123Pattern_m5045 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
extern "C" String_t* DateTimeFormatInfo_get_RoundtripPattern_m5046 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m5047 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
extern "C" String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m5048 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m5049 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
extern "C" void DateTimeFormatInfo_FillAllDateTimePatterns_m5050 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_GetAllRawDateTimePatterns_m5051 (DateTimeFormatInfo_t828 * __this, uint16_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetDayName_m5052 (DateTimeFormatInfo_t828 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
extern "C" String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m5053 (DateTimeFormatInfo_t828 * __this, int32_t ___dayofweek, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
extern "C" void DateTimeFormatInfo_FillInvariantPatterns_m5054 (DateTimeFormatInfo_t828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
extern "C" StringU5BU5D_t180* DateTimeFormatInfo_PopulateCombinedList_m5055 (DateTimeFormatInfo_t828 * __this, StringU5BU5D_t180* ___dates, StringU5BU5D_t180* ___times, const MethodInfo* method) IL2CPP_METHOD_ATTR;
