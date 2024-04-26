#include <stdio.h>


//再帰関数(再帰的な賃金体系)
int Recursive(int t,int h) {
	if (t <= 1) {
		return (h);
	}

	return h + Recursive(t-1,h * 2 - 50);
}



int main() {
	//時給
	int hourlyWage = 100;
	int hourlyWage2 = 1072;

	//時間
	int time = 8;

	//答えを入れる変数
	int result;
	int result2;

	//関数を用いて計算
	result = Recursive(time, hourlyWage);
	result2 = hourlyWage2 * time;

	printf("再帰的な賃金体系 : %d\n", result);
	printf("一般的な賃金体系 : %d\n",  result2);


	return(0);
}