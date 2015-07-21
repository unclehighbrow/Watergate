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
struct GameObject_t24;
// Burglar
struct Burglar_t2;
// UnityEngine.Collider2D
struct Collider2D_t58;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m99 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m100 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m101 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SetDestination(UnityEngine.Vector2)
extern "C" void Player_SetDestination_m102 (Player_t1 * __this, Vector2_t35  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FinishDying()
extern "C" void Player_FinishDying_m103 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::DeepThroatDeath()
extern "C" void Player_DeepThroatDeath_m104 (Player_t1 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Player::valid(UnityEngine.Vector2)
extern "C" bool Player_valid_m105 (Player_t1 * __this, Vector2_t35  ___dir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::RemoveScoreNotif(UnityEngine.GameObject)
extern "C" Object_t * Player_RemoveScoreNotif_m106 (Player_t1 * __this, GameObject_t24 * ___scoreNotif, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ScoreNotif(System.Int32)
extern "C" void Player_ScoreNotif_m107 (Player_t1 * __this, int32_t ___score, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::KillBurglar(Burglar)
extern "C" void Player_KillBurglar_m108 (Player_t1 * __this, Burglar_t2 * ___burglar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Player_OnTriggerEnter2D_m109 (Player_t1 * __this, Collider2D_t58 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::applyDirection(UnityEngine.Vector2)
extern "C" void Player_applyDirection_m110 (Player_t1 * __this, Vector2_t35  ___newDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
