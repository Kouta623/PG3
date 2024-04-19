#include <stdio.h>

int Recursive(int t,int h) {
	if (t <= 1) {
		return (h);
	}

	return h + Recursive(t-1,h * 2 - 50);
}



int main() {
	int hourlyWage = 100;
	int hourlyWage2 = 1072;
	int time = 8;
	int result;
	int result2;


	result = Recursive(time, hourlyWage);
	result2 = hourlyWage2 * time;

	printf("Ä‹A“I‚È’À‹à‘ÌŒn : %d\n", result);
	printf("ˆê”Ê“I‚È’À‹à‘ÌŒn : %d\n",  result2);


	return(0);
}