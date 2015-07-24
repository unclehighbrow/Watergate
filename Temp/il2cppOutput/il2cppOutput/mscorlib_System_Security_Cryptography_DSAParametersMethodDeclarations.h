#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1183;
struct DSAParameters_t1183_marshaled;

void DSAParameters_t1183_marshal(const DSAParameters_t1183& unmarshaled, DSAParameters_t1183_marshaled& marshaled);
void DSAParameters_t1183_marshal_back(const DSAParameters_t1183_marshaled& marshaled, DSAParameters_t1183& unmarshaled);
void DSAParameters_t1183_marshal_cleanup(DSAParameters_t1183_marshaled& marshaled);
