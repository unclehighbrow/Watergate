#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TutorialBase
struct TutorialBase_t26;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t7;
// Goal
struct Goal_t21;

// System.Void TutorialBase::.ctor()
extern "C" void TutorialBase__ctor_m149 (TutorialBase_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Start()
extern "C" void TutorialBase_Start_m150 (TutorialBase_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Update()
extern "C" void TutorialBase_Update_m151 (TutorialBase_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::StopPointer()
extern "C" void TutorialBase_StopPointer_m152 (TutorialBase_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::DisplayLine(System.String,UnityEngine.Sprite,System.Boolean)
extern "C" Object_t * TutorialBase_DisplayLine_m153 (TutorialBase_t26 * __this, String_t* ___text, Sprite_t7 * ___sprite, bool ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::GoalHit(Goal)
extern "C" void TutorialBase_GoalHit_m154 (TutorialBase_t26 * __this, Goal_t21 * ___goal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::Pointer()
extern "C" Object_t * TutorialBase_Pointer_m155 (TutorialBase_t26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
