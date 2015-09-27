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

// HealthKitTest
struct HealthKitTest_t3;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E.h"
#include "AssemblyU2DUnityScript_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DUnityScript_HealthKitTest.h"
#include "AssemblyU2DUnityScript_HealthKitTestMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleMethodDeclarations.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_GUIStyle.h"
#include "UnityEngine_UnityEngine_ColorMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIStyleStateMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_GUIStyleState.h"
#include "UnityEngine_UnityEngine_Color.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUIMethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_HealthKitMethodDeclarations.h"
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServicesMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_System_Boolean.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void HealthKitTest::.ctor()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GUIStyle_t5_il2cpp_TypeInfo_var;
extern "C" void HealthKitTest__ctor_m18 (HealthKitTest_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		GUIStyle_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m22(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___label_3 = L_0;
		int32_t L_1 = Screen_get_width_m23(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___centerx_4 = ((int32_t)((int32_t)L_1/(int32_t)2));
		int32_t L_2 = Screen_get_height_m24(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___centery_5 = ((int32_t)((int32_t)L_2/(int32_t)2));
		GUIStyle_t5 * L_3 = (GUIStyle_t5 *)il2cpp_codegen_object_new (GUIStyle_t5_il2cpp_TypeInfo_var);
		GUIStyle__ctor_m25(L_3, /*hidden argument*/NULL);
		__this->___labelStyle_6 = L_3;
		return;
	}
}
// System.Void HealthKitTest::Start()
extern "C" void HealthKitTest_Start_m19 (HealthKitTest_t3 * __this, const MethodInfo* method)
{
	{
		GUIStyle_t5 * L_0 = (__this->___labelStyle_6);
		NullCheck(L_0);
		GUIStyle_set_alignment_m26(L_0, 4, /*hidden argument*/NULL);
		GUIStyle_t5 * L_1 = (__this->___labelStyle_6);
		NullCheck(L_1);
		GUIStyleState_t6 * L_2 = GUIStyle_get_normal_m27(L_1, /*hidden argument*/NULL);
		Color_t7  L_3 = Color_get_white_m28(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		GUIStyleState_set_textColor_m29(L_2, L_3, /*hidden argument*/NULL);
		__this->___age_7 = (-1);
		__this->___weight_8 = (-1);
		__this->___steps_9 = (-1);
		__this->___calories_10 = (-1);
		__this->___sleep_11 = (-1);
		return;
	}
}
// System.Void HealthKitTest::OnGUI()
extern TypeInfo* GUI_t9_il2cpp_TypeInfo_var;
extern TypeInfo* RuntimeServices_t10_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern Il2CppCodeGenString* _stringLiteral2;
extern Il2CppCodeGenString* _stringLiteral3;
extern Il2CppCodeGenString* _stringLiteral4;
extern Il2CppCodeGenString* _stringLiteral5;
extern Il2CppCodeGenString* _stringLiteral6;
extern Il2CppCodeGenString* _stringLiteral7;
extern Il2CppCodeGenString* _stringLiteral8;
extern Il2CppCodeGenString* _stringLiteral9;
extern Il2CppCodeGenString* _stringLiteral10;
extern Il2CppCodeGenString* _stringLiteral11;
extern Il2CppCodeGenString* _stringLiteral12;
extern Il2CppCodeGenString* _stringLiteral13;
extern Il2CppCodeGenString* _stringLiteral14;
extern "C" void HealthKitTest_OnGUI_m20 (HealthKitTest_t3 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GUI_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		RuntimeServices_t10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		_stringLiteral5 = il2cpp_codegen_string_literal_from_index(5);
		_stringLiteral6 = il2cpp_codegen_string_literal_from_index(6);
		_stringLiteral7 = il2cpp_codegen_string_literal_from_index(7);
		_stringLiteral8 = il2cpp_codegen_string_literal_from_index(8);
		_stringLiteral9 = il2cpp_codegen_string_literal_from_index(9);
		_stringLiteral10 = il2cpp_codegen_string_literal_from_index(10);
		_stringLiteral11 = il2cpp_codegen_string_literal_from_index(11);
		_stringLiteral12 = il2cpp_codegen_string_literal_from_index(12);
		_stringLiteral13 = il2cpp_codegen_string_literal_from_index(13);
		_stringLiteral14 = il2cpp_codegen_string_literal_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = (__this->___centerx_4);
		Rect_t8  L_1 = {0};
		Rect__ctor_m30(&L_1, (((float)((float)((int32_t)((int32_t)L_0-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)25)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		GUIStyle_t5 * L_2 = (__this->___labelStyle_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t9_il2cpp_TypeInfo_var);
		GUI_Label_m31(NULL /*static, unused*/, L_1, _stringLiteral1, L_2, /*hidden argument*/NULL);
		bool L_3 = (__this->___querying_2);
		if (L_3)
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_4 = (__this->___centerx_4);
		Rect_t8  L_5 = {0};
		Rect__ctor_m30(&L_5, (((float)((float)((int32_t)((int32_t)L_4-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)50)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t9_il2cpp_TypeInfo_var);
		bool L_6 = GUI_Button_m32(NULL /*static, unused*/, L_5, _stringLiteral2, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0071;
		}
	}
	{
		HealthKit_RetrieveHealthInfo_m8(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___label_3 = _stringLiteral3;
		__this->___querying_2 = 1;
	}

IL_0071:
	{
		bool L_7 = (__this->___querying_2);
		if (!L_7)
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_8 = Time_get_frameCount_m33(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_8%(int32_t)((int32_t)10))))
		{
			goto IL_00dc;
		}
	}
	{
		bool L_9 = HealthKit_isRetrieved_m9(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		__this->___label_3 = _stringLiteral4;
		__this->___querying_2 = 0;
	}

IL_00a5:
	{
		int32_t L_10 = HealthKit_age_m10(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___age_7 = L_10;
		int32_t L_11 = HealthKit_weight_m11(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___weight_8 = L_11;
		int32_t L_12 = HealthKit_steps_m12(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___steps_9 = L_12;
		int32_t L_13 = HealthKit_calories_m13(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___calories_10 = L_13;
		int32_t L_14 = HealthKit_sleep_m14(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___sleep_11 = L_14;
	}

IL_00dc:
	{
		int32_t L_15 = (__this->___centerx_4);
		Rect_t8  L_16 = {0};
		Rect__ctor_m30(&L_16, (((float)((float)((int32_t)((int32_t)L_15-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)75)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		String_t* L_17 = (__this->___label_3);
		GUIStyle_t5 * L_18 = (__this->___labelStyle_6);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t9_il2cpp_TypeInfo_var);
		GUI_Label_m31(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		int32_t L_19 = (__this->___centerx_4);
		Rect_t8  L_20 = {0};
		Rect__ctor_m30(&L_20, (((float)((float)((int32_t)((int32_t)L_19-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		int32_t* L_21 = &(__this->___age_7);
		String_t* L_22 = Int32_ToString_m34(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t10_il2cpp_TypeInfo_var);
		String_t* L_23 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, _stringLiteral5, L_22, /*hidden argument*/NULL);
		String_t* L_24 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, L_23, _stringLiteral6, /*hidden argument*/NULL);
		GUIStyle_t5 * L_25 = (__this->___labelStyle_6);
		GUI_Label_m31(NULL /*static, unused*/, L_20, L_24, L_25, /*hidden argument*/NULL);
		int32_t L_26 = (__this->___centerx_4);
		Rect_t8  L_27 = {0};
		Rect__ctor_m30(&L_27, (((float)((float)((int32_t)((int32_t)L_26-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)125)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		int32_t* L_28 = &(__this->___weight_8);
		String_t* L_29 = Int32_ToString_m34(L_28, /*hidden argument*/NULL);
		String_t* L_30 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, _stringLiteral7, L_29, /*hidden argument*/NULL);
		String_t* L_31 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, L_30, _stringLiteral8, /*hidden argument*/NULL);
		GUIStyle_t5 * L_32 = (__this->___labelStyle_6);
		GUI_Label_m31(NULL /*static, unused*/, L_27, L_31, L_32, /*hidden argument*/NULL);
		int32_t L_33 = (__this->___centerx_4);
		Rect_t8  L_34 = {0};
		Rect__ctor_m30(&L_34, (((float)((float)((int32_t)((int32_t)L_33-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)150)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		int32_t* L_35 = &(__this->___steps_9);
		String_t* L_36 = Int32_ToString_m34(L_35, /*hidden argument*/NULL);
		String_t* L_37 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, _stringLiteral9, L_36, /*hidden argument*/NULL);
		String_t* L_38 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, L_37, _stringLiteral10, /*hidden argument*/NULL);
		GUIStyle_t5 * L_39 = (__this->___labelStyle_6);
		GUI_Label_m31(NULL /*static, unused*/, L_34, L_38, L_39, /*hidden argument*/NULL);
		int32_t L_40 = (__this->___centerx_4);
		Rect_t8  L_41 = {0};
		Rect__ctor_m30(&L_41, (((float)((float)((int32_t)((int32_t)L_40-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)175)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		int32_t* L_42 = &(__this->___calories_10);
		String_t* L_43 = Int32_ToString_m34(L_42, /*hidden argument*/NULL);
		String_t* L_44 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, _stringLiteral11, L_43, /*hidden argument*/NULL);
		String_t* L_45 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, L_44, _stringLiteral12, /*hidden argument*/NULL);
		GUIStyle_t5 * L_46 = (__this->___labelStyle_6);
		GUI_Label_m31(NULL /*static, unused*/, L_41, L_45, L_46, /*hidden argument*/NULL);
		int32_t L_47 = (__this->___centerx_4);
		Rect_t8  L_48 = {0};
		Rect__ctor_m30(&L_48, (((float)((float)((int32_t)((int32_t)L_47-(int32_t)((int32_t)50)))))), (((float)((float)((int32_t)200)))), (((float)((float)((int32_t)100)))), (((float)((float)((int32_t)25)))), /*hidden argument*/NULL);
		int32_t* L_49 = &(__this->___sleep_11);
		String_t* L_50 = Int32_ToString_m34(L_49, /*hidden argument*/NULL);
		String_t* L_51 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, _stringLiteral13, L_50, /*hidden argument*/NULL);
		String_t* L_52 = RuntimeServices_op_Addition_m35(NULL /*static, unused*/, L_51, _stringLiteral14, /*hidden argument*/NULL);
		GUIStyle_t5 * L_53 = (__this->___labelStyle_6);
		GUI_Label_m31(NULL /*static, unused*/, L_48, L_52, L_53, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HealthKitTest::Main()
extern "C" void HealthKitTest_Main_m21 (HealthKitTest_t3 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
