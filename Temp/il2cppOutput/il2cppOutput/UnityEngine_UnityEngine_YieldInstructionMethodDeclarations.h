#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t486;
struct YieldInstruction_t486_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2917 (YieldInstruction_t486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t486_marshal(const YieldInstruction_t486& unmarshaled, YieldInstruction_t486_marshaled& marshaled);
void YieldInstruction_t486_marshal_back(const YieldInstruction_t486_marshaled& marshaled, YieldInstruction_t486& unmarshaled);
void YieldInstruction_t486_marshal_cleanup(YieldInstruction_t486_marshaled& marshaled);
