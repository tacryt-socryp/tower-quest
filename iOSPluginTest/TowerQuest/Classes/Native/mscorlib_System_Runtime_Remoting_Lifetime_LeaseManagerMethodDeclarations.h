﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Lifetime.LeaseManager
struct LeaseManager_t1033;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::.ctor()
extern "C" void LeaseManager__ctor_m6203 (LeaseManager_t1033 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LeaseManager::SetPollTime(System.TimeSpan)
extern "C" void LeaseManager_SetPollTime_m6204 (LeaseManager_t1033 * __this, TimeSpan_t382  ___timeSpan, const MethodInfo* method) IL2CPP_METHOD_ATTR;
