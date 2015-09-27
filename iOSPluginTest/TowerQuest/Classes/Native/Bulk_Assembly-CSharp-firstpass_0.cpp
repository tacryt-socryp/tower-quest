#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// HealthKit
struct HealthKit_t1;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HealthKit.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HealthKitMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Double.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RuntimePlatform.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Object.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HealthKit::.ctor()
extern "C" void HealthKit__ctor_m0 (HealthKit_t1 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m9(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthKit::_RetrieveHealthInfo()
extern "C" {void DEFAULT_CALL _RetrieveHealthInfo();}
extern "C" void HealthKit__RetrieveHealthInfo_m1 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_RetrieveHealthInfo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_RetrieveHealthInfo'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Boolean HealthKit::_isRetrieved()
extern "C" {int32_t DEFAULT_CALL _isRetrieved();}
extern "C" bool HealthKit__isRetrieved_m2 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_isRetrieved;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_isRetrieved'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Int32 HealthKit::_age()
extern "C" {int32_t DEFAULT_CALL _age();}
extern "C" int32_t HealthKit__age_m3 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_age;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_age'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Double HealthKit::_weight()
extern "C" {double DEFAULT_CALL _weight();}
extern "C" double HealthKit__weight_m4 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef double (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_weight;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_weight'"));
		}
	}

	// Native function invocation and marshaling of return value back from native representation
	double _return_value = _il2cpp_pinvoke_func();

	return _return_value;
}
// System.Void HealthKit::RetrieveHealthInfo()
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void HealthKit_RetrieveHealthInfo_m5 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		HealthKit__RetrieveHealthInfo_m1(NULL /*static, unused*/, /*hidden argument*/NULL);
		goto IL_001e;
	}

IL_0014:
	{
		Debug_Log_m11(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Boolean HealthKit::isRetrieved()
extern "C" bool HealthKit_isRetrieved_m6 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = HealthKit__isRetrieved_m2(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return 0;
	}
}
// System.Int32 HealthKit::age()
extern "C" int32_t HealthKit_age_m7 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = HealthKit__age_m3(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return 0;
	}
}
// System.Double HealthKit::weight()
extern "C" double HealthKit_weight_m8 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_platform_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		double L_1 = HealthKit__weight_m4(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_1;
	}

IL_0010:
	{
		return (0.0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
