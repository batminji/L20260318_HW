#pragma once

class ACharacter;

class ATrack
{
public:
	ATrack();
	~ATrack();

	int X;
	int Y;
	int Z;

	ACharacter* Characters;
};

