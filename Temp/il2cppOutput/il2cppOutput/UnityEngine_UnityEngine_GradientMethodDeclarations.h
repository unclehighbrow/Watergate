#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t507;
struct Gradient_t507_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m2397 (Gradient_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m2398 (Gradient_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m2399 (Gradient_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m2400 (Gradient_t507 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t507_marshal(const Gradient_t507& unmarshaled, Gradient_t507_marshaled& marshaled);
void Gradient_t507_marshal_back(const Gradient_t507_marshaled& marshaled, Gradient_t507& unmarshaled);
void Gradient_t507_marshal_cleanup(Gradient_t507_marshaled& marshaled);
