#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector2
struct Vector2_t38;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" void Vector2__ctor_m306 (Vector2_t38 * __this, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
extern "C" float Vector2_get_Item_m1805 (Vector2_t38 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::set_Item(System.Int32,System.Single)
extern "C" void Vector2_set_Item_m1815 (Vector2_t38 * __this, int32_t ___index, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_MoveTowards_m201 (Object_t * __this /* static, unused */, Vector2_t38  ___current, Vector2_t38  ___target, float ___maxDistanceDelta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_Scale_m1903 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector2::ToString()
extern "C" String_t* Vector2_ToString_m2604 (Vector2_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector2::GetHashCode()
extern "C" int32_t Vector2_GetHashCode_m2605 (Vector2_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::Equals(System.Object)
extern "C" bool Vector2_Equals_m2606 (Vector2_t38 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" float Vector2_Dot_m1659 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_magnitude()
extern "C" float Vector2_get_magnitude_m2607 (Vector2_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
extern "C" float Vector2_get_sqrMagnitude_m1613 (Vector2_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector2::SqrMagnitude(UnityEngine.Vector2)
extern "C" float Vector2_SqrMagnitude_m2608 (Object_t * __this /* static, unused */, Vector2_t38  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C" Vector2_t38  Vector2_get_zero_m195 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
extern "C" Vector2_t38  Vector2_get_one_m1802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
extern "C" Vector2_t38  Vector2_get_up_m326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
extern "C" Vector2_t38  Vector2_get_right_m324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Addition_m192 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Subtraction_m323 (Object_t * __this /* static, unused */, Vector2_t38  ___a, Vector2_t38  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_UnaryNegation_m325 (Object_t * __this /* static, unused */, Vector2_t38  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_op_Multiply_m330 (Object_t * __this /* static, unused */, Vector2_t38  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(System.Single,UnityEngine.Vector2)
extern "C" Vector2_t38  Vector2_op_Multiply_m191 (Object_t * __this /* static, unused */, float ___d, Vector2_t38  ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
extern "C" Vector2_t38  Vector2_op_Division_m1864 (Object_t * __this /* static, unused */, Vector2_t38  ___a, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Equality_m203 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Vector2_op_Inequality_m196 (Object_t * __this /* static, unused */, Vector2_t38  ___lhs, Vector2_t38  ___rhs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" Vector2_t38  Vector2_op_Implicit_m199 (Object_t * __this /* static, unused */, Vector3_t58  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" Vector3_t58  Vector2_op_Implicit_m314 (Object_t * __this /* static, unused */, Vector2_t38  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
