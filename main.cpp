#include<stdio.h>
#include"Car.h"
#include"PoliceCar.h"
#include"RaceCar.h"

int main() {


	Car* death_enters[2];
	//�����t�F�[�Y
	printf("\n�����t�F�[�Y\n");
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_enters[i] = new PoliceCar;
		}
		else
		{
			death_enters[i] = new RaceCar;
		}
	}

	//�^�]�t�F�[�Y
	printf("\n�^�]�t�F�[�Y\n");
	for (int i = 0; i < 2; i++) {
		death_enters[i]->driving();
	}

	//�j���t�F�[�Y
	printf("\n�j���t�F�[�Y\n");
	for (int i = 0; i < 2; i++) {
		delete death_enters[i];
	}
}