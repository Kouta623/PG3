#include "Circle.h"
#include <stdio.h>



Circle::Circle()
{
}

Circle::~Circle()
{
}

void Circle::Size()
{

	R = 5.0f;
	result = R * R * 3.14f;

}

void Circle::Draw()
{
	printf("Circleの面積は %f です\n", result);
}
