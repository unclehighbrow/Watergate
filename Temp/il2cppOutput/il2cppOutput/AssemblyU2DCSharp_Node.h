#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Node
struct Node_t39;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Node
struct  Node_t39  : public Object_t
{
	// System.Int32 Node::gCost
	int32_t ___gCost_0;
	// System.Int32 Node::hCost
	int32_t ___hCost_1;
	// UnityEngine.Vector2 Node::position
	Vector2_t40  ___position_2;
	// Node Node::parent
	Node_t39 * ___parent_3;
};
