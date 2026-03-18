#pragma once

struct FVector
{
	int X;
	int Y;
	int Z;
};

struct FTransform
{
	FVector Location;
	FVector Rotation;
	FVector Scale;
};


class AActor
{
public:
	AActor();
	void AddActorLocalOffset(FVector DeltaLocation);
	~AActor();

	FTransform Transform;
	int StaticMesh;
};

