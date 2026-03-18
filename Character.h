#pragma once
#include "Actor.h"

class AFrame;
class ATire;
class AGlider;
class AItem;

class ACharacter : public AActor
{
public:
	ACharacter();

	void Move();
	void Handeling();
	void Suspension();

	void GetItem();
	void UseItem();

	~ACharacter();

	AFrame* Frame;
	ATire* Tires;
	AGlider* Glider;
	
	AItem* Items;
};

