#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TutorialBase
struct TutorialBase_t22;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t7;
// Goal
struct Goal_t17;

// System.Void TutorialBase::.ctor()
extern "C" void TutorialBase__ctor_m142 (TutorialBase_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Start()
extern "C" void TutorialBase_Start_m143 (TutorialBase_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Update()
extern "C" void TutorialBase_Update_m144 (TutorialBase_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::StopPointer()
extern "C" void TutorialBase_StopPointer_m145 (TutorialBase_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::DisplayLine(System.String,UnityEngine.Sprite,System.Boolean)
extern "C" Object_t * TutorialBase_DisplayLine_m146 (TutorialBase_t22 * __this, String_t* ___text, Sprite_t7 * ___sprite, bool ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::GoalHit(Goal)
extern "C" void TutorialBase_GoalHit_m147 (TutorialBase_t22 * __this, Goal_t17 * ___goal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::Pointer()
extern "C" Object_t * TutorialBase_Pointer_m148 (TutorialBase_t22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
