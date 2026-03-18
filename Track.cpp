#include "Track.h"
#include "Character.h"

ATrack::ATrack()
{
	Characters = new ACharacter[8];
}

ATrack::~ATrack()
{
	delete[] Characters;
	Characters = nullptr;
}
