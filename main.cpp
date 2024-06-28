#include<stdio.h>
#include"IShap.h"
#include"Circle.h"
#include"Rectangle.h"

int main() {


	IShap* death_enters[2];
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_enters[i] = new Circle;
		}
		else
		{
			death_enters[i] = new Rectanglr;
		}
	}


	for (int i = 0; i < 2; i++) {
		death_enters[i]->Size();
	}

	for (int i = 0; i < 2; i++) {
		death_enters[i]->Draw();
	}

	for (int i = 0; i < 2; i++) {
		delete death_enters[i];
	}
}