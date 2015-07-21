#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t478;
struct AsyncOperation_t478_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2789 (AsyncOperation_t478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2790 (AsyncOperation_t478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2791 (AsyncOperation_t478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t478_marshal(const AsyncOperation_t478& unmarshaled, AsyncOperation_t478_marshaled& marshaled);
void AsyncOperation_t478_marshal_back(const AsyncOperation_t478_marshaled& marshaled, AsyncOperation_t478& unmarshaled);
void AsyncOperation_t478_marshal_cleanup(AsyncOperation_t478_marshaled& marshaled);
