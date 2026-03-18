#include "Track.h"

int main()
{
	ATrack* Track = new ATrack();

	delete Track;
	Track = nullptr;

	return 0;
}