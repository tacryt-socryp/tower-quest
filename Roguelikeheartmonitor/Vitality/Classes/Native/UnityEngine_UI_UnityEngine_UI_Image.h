#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t6;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t148;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t149;

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"

// UnityEngine.UI.Image
struct  Image_t109  : public MaskableGraphic_t147
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t6 * ___m_Sprite_26;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t6 * ___m_OverrideSprite_27;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_28;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_29;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_30;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_31;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_32;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_33;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_34;
	// System.Single UnityEngine.UI.Image::m_EventAlphaThreshold
	float ___m_EventAlphaThreshold_35;
};
struct Image_t109_StaticFields{
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t148* ___s_VertScratch_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t148* ___s_UVScratch_37;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t149* ___s_Xy_38;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t149* ___s_Uv_39;
};
