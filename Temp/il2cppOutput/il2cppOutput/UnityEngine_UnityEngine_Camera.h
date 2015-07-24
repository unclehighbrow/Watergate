#pragma once
#include <stdint.h>
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t558;
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_Behaviour.h"
// UnityEngine.Camera
struct  Camera_t84  : public Behaviour_t394
{
};
struct Camera_t84_StaticFields{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t558 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t558 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t558 * ___onPostRender_4;
};
