#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t554;
struct CacheIndex_t554_marshaled;

void CacheIndex_t554_marshal(const CacheIndex_t554& unmarshaled, CacheIndex_t554_marshaled& marshaled);
void CacheIndex_t554_marshal_back(const CacheIndex_t554_marshaled& marshaled, CacheIndex_t554& unmarshaled);
void CacheIndex_t554_marshal_cleanup(CacheIndex_t554_marshaled& marshaled);
