#include "Parts.h"

AParts::AParts()
{
	X = 0;
	Y = 0;;
	Z = 0;

	Mesh = 0;

	Speed.Air = 0.0f;
	Speed.AntiGravity = 0.0f;
	Speed.Ground = 0.0f;
	Speed.Water = 0.0f;

	Acceleration = 0.0f;
	Weight = 0.0f;
	Handling.Air = 0.0f;
	Handling.AntiGravity = 0.0f;
	Handling.Ground = 0.0f;
	Handling.Water = 0.0f;
	Friction = 0.0f;
	Turbo = 0.0f;
	InvincibleTime = 0.0f;
}

AParts::~AParts()
{
}
