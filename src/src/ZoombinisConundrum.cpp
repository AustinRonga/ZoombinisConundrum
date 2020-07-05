// ZoombinisConundrum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Zoombinis.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <vector>

int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int p = 0;
	int s = 0;

	std::vector<Zoombini> zoombinis(625);
	BayouBoat boat;
	//std::array<ZoombiniGroup, 16> boat.groupman;


	// zoombinis[0].eyes (Zoombini #1, Eye Feature)
	zoombinis[n].eyes = a;
	zoombinis[n].hair = b;
	zoombinis[n].nose = c;
	zoombinis[n].loco = d;

	while (n < 625) {
		//for (int n = 0; n<625; p++){

			// n++;
		for (int i = 0; i < 5; i++) {

			for (int j = 0; j < 5; j++) {

				for (int k = 0; k < 5; k++) {

					for (int m = 0; m < 5; m++) {
						zoombinis[n].eyes = i;
						zoombinis[n].hair = j;
						zoombinis[n].nose = k;
						zoombinis[n].loco = m;
						n++;
					}
					zoombinis[n].eyes = i;
					zoombinis[n].hair = j;
					zoombinis[n].nose = k;
					zoombinis[n].loco = m;
					//n++;
				}
				zoombinis[n].eyes = i;
				zoombinis[n].hair = j;
				zoombinis[n].nose = k;
				zoombinis[n].loco = m;
				//n++;
			}

			zoombinis[n].eyes = i;
			zoombinis[n].hair = j;
			zoombinis[n].nose = k;
			zoombinis[n].loco = m;
			//n++;
		}
		/*zoombinis[n].eyes = i;
		zoombinis[n].hair = j;
		zoombinis[n].nose = k;
		zoombinis[n].loco = m;
		n++;*/
	}
	// size_t f = sizeof(zoombinis) / sizeof(zoombinis[0]);

	for (int f = 0; f < 625; f++) {
		int g = f + 1;
		//std::cout << "Zoombini Number " << g": "<< zoombinis[f].eyes<< ", "<< zoombinis[f].hair<<", "<< zoombinis[f].nose << ", " << zoombinis[f].loco << std::cout << ". \n";
	}

	std::cout << "List of group constituents: \n";
	for (int q = 0; q < 16; q++) {
		srand(time(0));
		boat.groupman[q].identity = (rand() % 625);
		for (int r = 0; r < q; r++) {
			if (boat.groupman[q].identity == boat.groupman[r].identity) { //preventing repeat zoombinis
				boat.groupman[q].identity = (rand() % 625);
			}
		}
		s = boat.groupman[q].identity;


		std::cout << "Member " << (q + 1) << ": Zoombini " << boat.groupman[q].identity << " (Features: " << zoombinis[s].eyes << ", " << zoombinis[s].hair << ", " << zoombinis[s].nose << ", " << zoombinis[s].loco << ") \n";

	}


	/*for (int q = 0; q < 16; q++)
	{
		boat.bzoombinis[q] = zoombinis[boat.groupman[q].identity];
	}*/

	int simils = 0;
	int eyecheck = 0;
	int nosecheck = 0;
	int haircheck = 0;
	int lococheck = 0;
	int comps = 0;
	for (int v = 0; v < 16; v++) {
		for (int w = 0; w < 16; w++) {

			int simils = boat.bzoombinis[v].Compare(boat.bzoombinis[w]);


		}
		std::cout << "\nNext Zoombini \n";

	}

	std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file