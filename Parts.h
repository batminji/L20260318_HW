#pragma once
#include "Actor.h"

struct FSpeed
{
	float Ground;
	float Water;
	float Air;
	float AntiGravity;
};

struct FHandling
{
	float Ground;
	float Water;
	float Air;
	float AntiGravity;
};

class AParts : public AActor
{
public:
	AParts();
	~AParts();

	FSpeed Speed;
	float Acceleration;
	float Weight;
	FHandling Handling;
	float Friction;
	float Turbo;
	float InvincibleTime;
};

