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

	printf("�ċA�I�Ȓ����̌n : %d\n", result);
	printf("��ʓI�Ȓ����̌n : %d\n",  result2);


	return(0);
}