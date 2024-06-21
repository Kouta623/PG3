#include<stdio.h>
#include"Car.h"
#include"PoliceCar.h"
#include"RaceCar.h"

int main() {


	Car* death_enters[2];
	//生成フェーズ
	printf("\n生成フェーズ\n");
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			death_enters[i] = new PoliceCar;
		}
		else
		{
			death_enters[i] = new RaceCar;
		}
	}

	//運転フェーズ
	printf("\n運転フェーズ\n");
	for (int i = 0; i < 2; i++) {
		death_enters[i]->driving();
	}

	//破棄フェーズ
	printf("\n破棄フェーズ\n");
	for (int i = 0; i < 2; i++) {
		delete death_enters[i];
	}
}