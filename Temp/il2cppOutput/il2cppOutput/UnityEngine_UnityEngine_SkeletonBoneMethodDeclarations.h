#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t590;
struct SkeletonBone_t590_marshaled;

void SkeletonBone_t590_marshal(const SkeletonBone_t590& unmarshaled, SkeletonBone_t590_marshaled& marshaled);
void SkeletonBone_t590_marshal_back(const SkeletonBone_t590_marshaled& marshaled, SkeletonBone_t590& unmarshaled);
void SkeletonBone_t590_marshal_cleanup(SkeletonBone_t590_marshaled& marshaled);
