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

// Player
struct Player_t3;
// System.Collections.IEnumerator
struct IEnumerator_t61;
// UnityEngine.GameObject
struct GameObject_t31;
// Burglar
struct Burglar_t1;
// UnityEngine.Collider2D
struct Collider2D_t63;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m106 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m107 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m108 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m109 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetDestination(UnityEngine.Vector2)
extern "C" void Player_SetDestination_m110 (Player_t3 * __this, Vector2_t40  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FinishDying()
extern "C" void Player_FinishDying_m111 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::DeepThroatDeath()
extern "C" void Player_DeepThroatDeath_m112 (Player_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::valid(UnityEngine.Vector2)
extern "C" bool Player_valid_m113 (Player_t3 * __this, Vector2_t40  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::RemoveScoreNotif(UnityEngine.GameObject)
extern "C" Object_t * Player_RemoveScoreNotif_m114 (Player_t3 * __this, GameObject_t31 * ___scoreNotif, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ScoreNotif(System.Int32)
extern "C" void Player_ScoreNotif_m115 (Player_t3 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::KillBurglar(Burglar)
extern "C" void Player_KillBurglar_m116 (Player_t3 * __this, Burglar_t1 * ___burglar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Player_OnTriggerEnter2D_m117 (Player_t3 * __this, Collider2D_t63 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::applyDirection(UnityEngine.Vector2)
extern "C" void Player_applyDirection_m118 (Player_t3 * __this, Vector2_t40  ___newDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
