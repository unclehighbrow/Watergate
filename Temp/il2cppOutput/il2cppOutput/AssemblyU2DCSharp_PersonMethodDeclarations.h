#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Person
struct Person_t3;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Person::.ctor()
extern "C" void Person__ctor_m81 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::.cctor()
extern "C" void Person__cctor_m82 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::OnDrawGizmos()
extern "C" void Person_OnDrawGizmos_m83 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::InitializeGrid()
extern "C" void Person_InitializeGrid_m84 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::Start()
extern "C" void Person_Start_m85 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::Update()
extern "C" void Person_Update_m86 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::SetDirection(UnityEngine.Vector2)
extern "C" void Person_SetDirection_m87 (Person_t3 * __this, Vector2_t35  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::Reset()
extern "C" void Person_Reset_m88 (Person_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Person::findNextDestination(UnityEngine.Vector2,System.Boolean)
extern "C" void Person_findNextDestination_m89 (Person_t3 * __this, Vector2_t35  ___finalDestination, bool ___towards, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Person::GetDistance(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" int32_t Person_GetDistance_m90 (Person_t3 * __this, Vector2_t35  ___start, Vector2_t35  ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Person::valid(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" bool Person_valid_m91 (Person_t3 * __this, Vector2_t35  ___pos, Vector2_t35  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Person::valid(UnityEngine.Vector2)
extern "C" bool Person_valid_m92 (Person_t3 * __this, Vector2_t35  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
