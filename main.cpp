#include<stdio.h>
#include"ClassTemplate.h"


int main() {

	ClassTemplate<int, int> result1(12, 23);
	ClassTemplate<float, float> result2(1.5f, 0.5f);
	ClassTemplate<double, double> result3(1.2, 5.4);

	printf("小さい値: %d\n", result1.Size());
	printf("小さい値: %f\n", result2.Size()); 
	printf("小さい値: %lf\n", result3.Size());

	return 0;
}