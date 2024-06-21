#include "RaceCar.h"
#include <stdio.h>

RaceCar::RaceCar()
{
	printf("レースカー：ブオンブオン\n");
}

RaceCar::~RaceCar()
{
	printf("レースカー：警察に見つかった\n");
}

void RaceCar::driving()
{
	printf("レースカー：爆走中\n");
}
