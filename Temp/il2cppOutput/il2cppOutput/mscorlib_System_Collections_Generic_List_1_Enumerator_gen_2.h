#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Node>
struct List_1_t93;
// Node
struct Node_t39;

#include "mscorlib_System_ValueType.h"

// System.Collections.Generic.List`1/Enumerator<Node>
struct  Enumerator_t95 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<Node>::l
	List_1_t93 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<Node>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<Node>::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator<Node>::current
	Node_t39 * ___current_3;
};
