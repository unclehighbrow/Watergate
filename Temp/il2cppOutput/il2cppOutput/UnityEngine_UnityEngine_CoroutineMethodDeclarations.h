#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t235;
struct Coroutine_t235_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2283 (Coroutine_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2284 (Coroutine_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2285 (Coroutine_t235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t235_marshal(const Coroutine_t235& unmarshaled, Coroutine_t235_marshaled& marshaled);
void Coroutine_t235_marshal_back(const Coroutine_t235_marshaled& marshaled, Coroutine_t235& unmarshaled);
void Coroutine_t235_marshal_cleanup(Coroutine_t235_marshaled& marshaled);
