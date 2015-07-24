#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WarpZone
struct WarpZone_t9;
// UnityEngine.Collider2D
struct Collider2D_t61;

// System.Void WarpZone::.ctor()
extern "C" void WarpZone__ctor_m177 (WarpZone_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WarpZone::Start()
extern "C" void WarpZone_Start_m178 (WarpZone_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WarpZone::Update()
extern "C" void WarpZone_Update_m179 (WarpZone_t9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WarpZone::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void WarpZone_OnTriggerEnter2D_m180 (WarpZone_t9 * __this, Collider2D_t61 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
