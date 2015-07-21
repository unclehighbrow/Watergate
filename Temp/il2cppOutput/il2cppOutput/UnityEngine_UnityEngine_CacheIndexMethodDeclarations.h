#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t553;
struct CacheIndex_t553_marshaled;

void CacheIndex_t553_marshal(const CacheIndex_t553& unmarshaled, CacheIndex_t553_marshaled& marshaled);
void CacheIndex_t553_marshal_back(const CacheIndex_t553_marshaled& marshaled, CacheIndex_t553& unmarshaled);
void CacheIndex_t553_marshal_cleanup(CacheIndex_t553_marshaled& marshaled);
