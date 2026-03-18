#pragma once

class AFrame;
class ATire;
class AGlider;
class AItem;

class ACharacter
{
public:
	ACharacter();
	void Move();
	void Handeling();
	void Suspension();
	~ACharacter();
	int X;
	int Y;
	int Z;

	AFrame* Frame;
	ATire* Tires;
	AGlider* Glider;
	
	AItem* Items;
};

