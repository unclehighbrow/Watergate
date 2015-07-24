#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t479;
struct AsyncOperation_t479_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2797 (AsyncOperation_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2798 (AsyncOperation_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2799 (AsyncOperation_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t479_marshal(const AsyncOperation_t479& unmarshaled, AsyncOperation_t479_marshaled& marshaled);
void AsyncOperation_t479_marshal_back(const AsyncOperation_t479_marshaled& marshaled, AsyncOperation_t479& unmarshaled);
void AsyncOperation_t479_marshal_cleanup(AsyncOperation_t479_marshaled& marshaled);
