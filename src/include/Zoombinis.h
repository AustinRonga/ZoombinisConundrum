#pragma once

#include <array>
#include <vector>

class Zoombini
{
public:
	// Returns the number of similarities between this and another Zoombini.
	int Compare(const Zoombini & other);

	int hair = 0;
	int eyes = 0;
	int nose = 0;
	int loco = 0;
	int row = 0;
	int col = 0;
	int ident = 0;


};
class ZoombiniGroup
{
public:
	int identity = 0;
	int row = 0;
	int column = 0;


};
class BayouBoat
{
public:
    BayouBoat();

	void RandomPlace();
	bool IsValidPlacement();

	std::array<ZoombiniGroup, 16> groupman;
	std::vector<Zoombini> bzoombinis;

};