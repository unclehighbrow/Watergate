#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1181;
struct RSAParameters_t1181_marshaled;

void RSAParameters_t1181_marshal(const RSAParameters_t1181& unmarshaled, RSAParameters_t1181_marshaled& marshaled);
void RSAParameters_t1181_marshal_back(const RSAParameters_t1181_marshaled& marshaled, RSAParameters_t1181& unmarshaled);
void RSAParameters_t1181_marshal_cleanup(RSAParameters_t1181_marshaled& marshaled);
