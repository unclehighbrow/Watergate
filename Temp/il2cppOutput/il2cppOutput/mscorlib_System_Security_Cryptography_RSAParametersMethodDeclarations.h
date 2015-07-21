#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1180;
struct RSAParameters_t1180_marshaled;

void RSAParameters_t1180_marshal(const RSAParameters_t1180& unmarshaled, RSAParameters_t1180_marshaled& marshaled);
void RSAParameters_t1180_marshal_back(const RSAParameters_t1180_marshaled& marshaled, RSAParameters_t1180& unmarshaled);
void RSAParameters_t1180_marshal_cleanup(RSAParameters_t1180_marshaled& marshaled);
