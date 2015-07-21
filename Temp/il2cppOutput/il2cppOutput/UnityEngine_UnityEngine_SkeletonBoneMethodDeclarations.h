#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t589;
struct SkeletonBone_t589_marshaled;

void SkeletonBone_t589_marshal(const SkeletonBone_t589& unmarshaled, SkeletonBone_t589_marshaled& marshaled);
void SkeletonBone_t589_marshal_back(const SkeletonBone_t589_marshaled& marshaled, SkeletonBone_t589& unmarshaled);
void SkeletonBone_t589_marshal_cleanup(SkeletonBone_t589_marshaled& marshaled);
