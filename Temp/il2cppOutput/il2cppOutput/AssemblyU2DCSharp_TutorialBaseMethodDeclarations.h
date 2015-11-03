#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TutorialBase
struct TutorialBase_t27;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t8;
// Goal
struct Goal_t23;

#include "codegen/il2cpp-codegen.h"

// System.Void TutorialBase::.ctor()
extern "C" void TutorialBase__ctor_m150 (TutorialBase_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Start()
extern "C" void TutorialBase_Start_m151 (TutorialBase_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::Update()
extern "C" void TutorialBase_Update_m152 (TutorialBase_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::StopPointer()
extern "C" void TutorialBase_StopPointer_m153 (TutorialBase_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::DisplayLine(System.String,UnityEngine.Sprite,System.Boolean)
extern "C" Object_t * TutorialBase_DisplayLine_m154 (TutorialBase_t27 * __this, String_t* ___text, Sprite_t8 * ___sprite, bool ___pointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TutorialBase::GoalHit(Goal)
extern "C" void TutorialBase_GoalHit_m155 (TutorialBase_t27 * __this, Goal_t23 * ___goal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator TutorialBase::Pointer()
extern "C" Object_t * TutorialBase_Pointer_m156 (TutorialBase_t27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
