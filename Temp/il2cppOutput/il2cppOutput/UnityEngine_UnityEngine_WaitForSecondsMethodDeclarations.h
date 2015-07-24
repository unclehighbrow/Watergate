#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t78;
struct WaitForSeconds_t78_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m261 (WaitForSeconds_t78 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t78_marshal(const WaitForSeconds_t78& unmarshaled, WaitForSeconds_t78_marshaled& marshaled);
void WaitForSeconds_t78_marshal_back(const WaitForSeconds_t78_marshaled& marshaled, WaitForSeconds_t78& unmarshaled);
void WaitForSeconds_t78_marshal_cleanup(WaitForSeconds_t78_marshaled& marshaled);
