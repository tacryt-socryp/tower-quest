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

// UnityEngine.UI.MaskUtilities
struct MaskUtilities_t177;
// UnityEngine.Component
struct Component_t25;
// UnityEngine.Transform
struct Transform_t21;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t176;
// UnityEngine.UI.IClippable
struct IClippable_t285;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t185;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.MaskUtilities::.ctor()
extern "C" void MaskUtilities__ctor_m860 (MaskUtilities_t177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::Notify2DMaskStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_Notify2DMaskStateChanged_m861 (Object_t * __this /* static, unused */, Component_t25 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::NotifyStencilStateChanged(UnityEngine.Component)
extern "C" void MaskUtilities_NotifyStencilStateChanged_m862 (Object_t * __this /* static, unused */, Component_t25 * ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
extern "C" Transform_t21 * MaskUtilities_FindRootSortOverrideCanvas_m863 (Object_t * __this /* static, unused */, Transform_t21 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
extern "C" int32_t MaskUtilities_GetStencilDepth_m864 (Object_t * __this /* static, unused */, Transform_t21 * ___transform, Transform_t21 * ___stopAfter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskUtilities::GetRectMaskForClippable(UnityEngine.UI.IClippable)
extern "C" RectMask2D_t176 * MaskUtilities_GetRectMaskForClippable_m865 (Object_t * __this /* static, unused */, Object_t * ___transform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.MaskUtilities::GetRectMasksForClip(UnityEngine.UI.RectMask2D,System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>)
extern "C" void MaskUtilities_GetRectMasksForClip_m866 (Object_t * __this /* static, unused */, RectMask2D_t176 * ___clipper, List_1_t185 * ___masks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
