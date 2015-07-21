#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t1406;
struct PreviousInfo_t1406_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m6920 (PreviousInfo_t1406 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t1406_marshal(const PreviousInfo_t1406& unmarshaled, PreviousInfo_t1406_marshaled& marshaled);
void PreviousInfo_t1406_marshal_back(const PreviousInfo_t1406_marshaled& marshaled, PreviousInfo_t1406& unmarshaled);
void PreviousInfo_t1406_marshal_cleanup(PreviousInfo_t1406_marshaled& marshaled);
