#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t485;
struct YieldInstruction_t485_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2909 (YieldInstruction_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t485_marshal(const YieldInstruction_t485& unmarshaled, YieldInstruction_t485_marshaled& marshaled);
void YieldInstruction_t485_marshal_back(const YieldInstruction_t485_marshaled& marshaled, YieldInstruction_t485& unmarshaled);
void YieldInstruction_t485_marshal_cleanup(YieldInstruction_t485_marshaled& marshaled);
