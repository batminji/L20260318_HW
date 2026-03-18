#include "Track.h"
#include "Character.h"

ATrack::ATrack()
{
	Transform.Location.X = 0;
	Transform.Location.Y = 0;
	Transform.Location.Z = 0;

	Transform.Rotation.X = 0;
	Transform.Rotation.Y = 0;
	Transform.Rotation.Z = 0;

	Transform.Scale.X = 0;
	Transform.Scale.Y = 0;
	Transform.Scale.Z = 0;

	StaticMesh = 0;

	Characters = new ACharacter[8];
}

ATrack::~ATrack()
{
	delete[] Characters;
	Characters = nullptr;
}
