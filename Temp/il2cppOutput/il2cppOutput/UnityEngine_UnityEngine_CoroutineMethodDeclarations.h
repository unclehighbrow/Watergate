#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t234;
struct Coroutine_t234_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2276 (Coroutine_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2277 (Coroutine_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2278 (Coroutine_t234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t234_marshal(const Coroutine_t234& unmarshaled, Coroutine_t234_marshaled& marshaled);
void Coroutine_t234_marshal_back(const Coroutine_t234_marshaled& marshaled, Coroutine_t234& unmarshaled);
void Coroutine_t234_marshal_cleanup(Coroutine_t234_marshaled& marshaled);
