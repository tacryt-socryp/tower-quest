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

// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache
struct DispatcherCache_t278;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t277;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t281;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory
struct DispatcherFactory_t276;

#include "codegen/il2cpp-codegen.h"

// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.ctor()
extern "C" void DispatcherCache__ctor_m1106 (DispatcherCache_t278 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::.cctor()
extern "C" void DispatcherCache__cctor_m1107 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher Boo.Lang.Runtime.DynamicDispatching.DispatcherCache::Get(Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.DispatcherCache/DispatcherFactory)
extern "C" Dispatcher_t277 * DispatcherCache_Get_m1108 (DispatcherCache_t278 * __this, DispatcherKey_t281 * ___key, DispatcherFactory_t276 * ___factory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
