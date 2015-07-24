#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1113;
struct IntStack_t1113_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C" int32_t IntStack_Pop_m4563 (IntStack_t1113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C" void IntStack_Push_m4564 (IntStack_t1113 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C" int32_t IntStack_get_Count_m4565 (IntStack_t1113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C" void IntStack_set_Count_m4566 (IntStack_t1113 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t1113_marshal(const IntStack_t1113& unmarshaled, IntStack_t1113_marshaled& marshaled);
void IntStack_t1113_marshal_back(const IntStack_t1113_marshaled& marshaled, IntStack_t1113& unmarshaled);
void IntStack_t1113_marshal_cleanup(IntStack_t1113_marshaled& marshaled);
