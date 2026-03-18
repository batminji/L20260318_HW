#include "Character.h"
#include "Frame.h"
#include "Tire.h"
#include "Glider.h"
#include "Item.h"

ACharacter::ACharacter()
{
	X = 1;
	Y = 1;
	Z = 1;

	Frame = new AFrame();
	Tires = new ATire[4]();
	Glider = new AGlider();

	Items = new AItem[2];
}

void ACharacter::Move()
{
}

void ACharacter::Handeling()
{
}

void ACharacter::Suspension()
{
}

ACharacter::~ACharacter()
{
	delete Frame;
	delete[] Tires;
	delete Glider;

	delete[] Items;

	Frame = nullptr;
	Tires = nullptr;
	Glider = nullptr;

	Items = nullptr;
}
