#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t76;
struct WaitForSeconds_t76_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m242 (WaitForSeconds_t76 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t76_marshal(const WaitForSeconds_t76& unmarshaled, WaitForSeconds_t76_marshaled& marshaled);
void WaitForSeconds_t76_marshal_back(const WaitForSeconds_t76_marshaled& marshaled, WaitForSeconds_t76& unmarshaled);
void WaitForSeconds_t76_marshal_cleanup(WaitForSeconds_t76_marshaled& marshaled);
