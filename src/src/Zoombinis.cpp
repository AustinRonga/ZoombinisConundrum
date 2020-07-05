#include "Zoombinis.h"

#include <iostream>

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
