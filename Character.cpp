#include "Character.h"
#include "Frame.h"
#include "Tire.h"
#include "Glider.h"
#include "Item.h"

ACharacter::ACharacter()
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

void ACharacter::GetItem()
{
}

void ACharacter::UseItem()
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
