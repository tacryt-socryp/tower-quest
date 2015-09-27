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
struct AnimationCurve_t460;
struct AnimationCurve_t460_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t553;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2642 (AnimationCurve_t460 * __this, KeyframeU5BU5D_t553* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2643 (AnimationCurve_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2644 (AnimationCurve_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2645 (AnimationCurve_t460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2646 (AnimationCurve_t460 * __this, KeyframeU5BU5D_t553* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t460_marshal(const AnimationCurve_t460& unmarshaled, AnimationCurve_t460_marshaled& marshaled);
extern "C" void AnimationCurve_t460_marshal_back(const AnimationCurve_t460_marshaled& marshaled, AnimationCurve_t460& unmarshaled);
extern "C" void AnimationCurve_t460_marshal_cleanup(AnimationCurve_t460_marshaled& marshaled);
