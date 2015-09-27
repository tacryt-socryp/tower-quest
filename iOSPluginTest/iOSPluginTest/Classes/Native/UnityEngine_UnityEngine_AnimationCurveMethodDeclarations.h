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

// UnityEngine.AnimationCurve
struct AnimationCurve_t107;
struct AnimationCurve_t107_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t225;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m517 (AnimationCurve_t107 * __this, KeyframeU5BU5D_t225* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m518 (AnimationCurve_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m519 (AnimationCurve_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m520 (AnimationCurve_t107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m521 (AnimationCurve_t107 * __this, KeyframeU5BU5D_t225* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t107_marshal(const AnimationCurve_t107& unmarshaled, AnimationCurve_t107_marshaled& marshaled);
extern "C" void AnimationCurve_t107_marshal_back(const AnimationCurve_t107_marshaled& marshaled, AnimationCurve_t107& unmarshaled);
extern "C" void AnimationCurve_t107_marshal_cleanup(AnimationCurve_t107_marshaled& marshaled);
