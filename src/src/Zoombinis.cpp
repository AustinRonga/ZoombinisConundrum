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

//void BayouBoat::RandomPlace(Zoombini) 
//{
//	for (int a = 0; a < 17; a++)
//	{
//		srand(time(0));
//
//		bzoombinis[a].row = ((rand()%2)+1);
//		bzoombinis[a].col = ((rand() % 8)+1);
//		for (int b = 0; b < a; b++) {
//			safetycheck:
//			if (bzoombinis[a].row == bzoombinis[b].row && bzoombinis[a].col == bzoombinis[b].col) {
//				bzoombinis[a].row = ((rand() % 2) + 1);
//				bzoombinis[a].col = ((rand() % 8) + 1);
//			}
//			else
//			{
//				std::cout << "Zoombini G" << a << " Z";
//				b++;
//			}
//			goto safetycheck;
//
//		}
//	}
//}

//bool BayouBoat::IsValidPlacement(const ZoombiniGroup, Zoombini) {}


