#pragma once
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

class AParts
{
public:
	AParts();
	~AParts();

	int X;
	int Y;
	int Z;

	int Mesh;

	FSpeed Speed;
	float Acceleration;
	float Weight;
	FHandling Handling;
	float Friction;
	float Turbo;
	float InvincibleTime;
};

