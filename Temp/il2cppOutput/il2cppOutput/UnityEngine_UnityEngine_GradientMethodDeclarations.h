#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t506;
struct Gradient_t506_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2390 (Gradient_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2391 (Gradient_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2392 (Gradient_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2393 (Gradient_t506 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t506_marshal(const Gradient_t506& unmarshaled, Gradient_t506_marshaled& marshaled);
void Gradient_t506_marshal_back(const Gradient_t506_marshaled& marshaled, Gradient_t506& unmarshaled);
void Gradient_t506_marshal_cleanup(Gradient_t506_marshaled& marshaled);
