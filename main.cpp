#include<stdio.h>
#include"ClassTemplate.h"


int main() {

	ClassTemplate<int, int> result1(12, 23);
	ClassTemplate<float, float> result2(1.5f, 0.5f);
	ClassTemplate<double, double> result3(1.2, 5.4);

	printf("�������l: %d\n", result1.Size());
	printf("�������l: %f\n", result2.Size()); 
	printf("�������l: %lf\n", result3.Size());

	return 0;
}