#include "Zoombinis.h"

#include <iostream>
#include <ctime>

int Zoombini::Compare(const Zoombini & other)
{
	int simils = 0;
	if (hair == other.hair)
		simils++;
	if (eyes == other.eyes)
		simils++;
	if (nose == other.nose)
		simils++;
	if (loco == other.loco)
		simils++;

	printf("Compared (%d, %d, %d, %d) to (%d, %d, %d, %d) and got %d similarities.\n", hair, eyes, nose, loco,
		other.hair, other.eyes, other.nose, other.loco, simils);

	return simils;
}

void BayouBoat::RandomPlace() 
{
	for (int a = 0; a < 16; a++)
	{
		srand(time(0));
		boat.bzoombinis.row = (rand()%2);
		boat.bzoombinis.col = (rand() % 8);
		

	}
}

//bool BayouBoat::IsValidPlacement(const ZoombiniGroup, Zoombini) {}

void BayouBoat::RandomPlace()
{
}
