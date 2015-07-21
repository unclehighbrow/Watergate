#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1182;
struct DSAParameters_t1182_marshaled;

void DSAParameters_t1182_marshal(const DSAParameters_t1182& unmarshaled, DSAParameters_t1182_marshaled& marshaled);
void DSAParameters_t1182_marshal_back(const DSAParameters_t1182_marshaled& marshaled, DSAParameters_t1182& unmarshaled);
void DSAParameters_t1182_marshal_cleanup(DSAParameters_t1182_marshaled& marshaled);
