#pragma once
#include "Actor.h"

class ACharacter;

class ATrack : public AActor
{
public:
	ATrack();
	~ATrack();

	ACharacter* Characters;
};

