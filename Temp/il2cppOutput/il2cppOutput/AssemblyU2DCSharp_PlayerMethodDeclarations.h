#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Player
struct Player_t1;
// System.Collections.IEnumerator
struct IEnumerator_t59;
// UnityEngine.GameObject
struct GameObject_t28;
// Burglar
struct Burglar_t2;
// UnityEngine.Collider2D
struct Collider2D_t61;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m106 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m107 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m108 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetDestination(UnityEngine.Vector2)
extern "C" void Player_SetDestination_m109 (Player_t1 * __this, Vector2_t38  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FinishDying()
extern "C" void Player_FinishDying_m110 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::DeepThroatDeath()
extern "C" void Player_DeepThroatDeath_m111 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::valid(UnityEngine.Vector2)
extern "C" bool Player_valid_m112 (Player_t1 * __this, Vector2_t38  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::RemoveScoreNotif(UnityEngine.GameObject)
extern "C" Object_t * Player_RemoveScoreNotif_m113 (Player_t1 * __this, GameObject_t28 * ___scoreNotif, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ScoreNotif(System.Int32)
extern "C" void Player_ScoreNotif_m114 (Player_t1 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::KillBurglar(Burglar)
extern "C" void Player_KillBurglar_m115 (Player_t1 * __this, Burglar_t2 * ___burglar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Player_OnTriggerEnter2D_m116 (Player_t1 * __this, Collider2D_t61 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::applyDirection(UnityEngine.Vector2)
extern "C" void Player_applyDirection_m117 (Player_t1 * __this, Vector2_t38  ___newDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
