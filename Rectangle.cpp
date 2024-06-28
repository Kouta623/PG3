#include "Rectangle.h"
#include <stdio.h>

Rectanglr::Rectanglr()
{
}

Rectanglr::~Rectanglr()
{
}

void Rectanglr::Size()
{
	Rect = 5.0f;
	result = Rect * Rect;

}

void Rectanglr::Draw()
{
	printf("Rectanglr‚Ì–ÊÏ‚Í %f ‚Å‚·\n",result);
}


