#include "PoliceCar.h"
#include <stdio.h>

PoliceCar::PoliceCar()
{
	printf("パトカー：止まりなさい\n");
}

PoliceCar::~PoliceCar()
{
	printf("パトカー：捕まえた\n");
}

void PoliceCar::driving()
{
	printf("パトカー：追跡開始\n");
}
