#include "Zoombinis.h"

#include <iostream>
#include <ctime>
#include <algorithm>


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


	 std::array<std::array<int,2>,16> positions;
	 for (int row = 0; row < 8; row++)
	 {
		 for (int col = 0; col < 2; col++)
		 {
			 positions[col * 8 + row][0] = col;
			 positions[col * 8 + row][1] = row;
		 }
	 }

	 std::vector<int> assignments(16);

	 for (int c = 0; c < 16; c++)
	 {
		 assignments[c] = c; 
	 }
	 std::random_shuffle(assignments.begin(), assignments.end());

	 for (int d = 0; d < 16; d++)
	 {
		 bzoombinis[d].col = positions[assignments[d]][0];
		 bzoombinis[d].row = positions[assignments[d]][1];
		 printf("Zoombini G%d, Z%d is at position (%d, %d).\n", (d+1), bzoombinis[d].ident, bzoombinis[d].col, bzoombinis[d].row);
	 }


}

//bool BayouBoat::IsValidPlacement(const ZoombiniGroup, Zoombini) {}

BayouBoat::BayouBoat()
{
    bzoombinis.resize(625);
}
