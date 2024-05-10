#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void(*PFunc)(int*);

//コールバック関数
void DispResult(int* time) {

	printf("%d秒待って実行されたよ\n", *time / 1000);

}

void setTimeout(PFunc result, int second) {
	//コールバック関数を呼び出す
	Sleep(second);

	result(&second);
}
int main(void) {

	//時間を取得
	unsigned int currentime = (unsigned int)time(nullptr);

	//乱数の初期化
	int randomNumber = rand();

	PFunc result;
	result = DispResult;
	int num;




	printf("半(奇数)だったら1，丁(偶然)だったら2を入力\n");
	scanf_s("%d", &num);
	while (num != 1 && num != 2)
	{
		printf("もう一度入力\n");
		scanf_s("%d", &num);
	}
	//乱数に1～6を代入
	randomNumber = rand() % 6 + 1;
	printf("サイコロの目は%d\n", randomNumber);
	setTimeout(result, 3000);

	if ((randomNumber % 2 == 1 && num == 1) || (randomNumber % 2 == 0 && num == 2)) {
		printf("正解");
	}
	
	else
	{
		printf("不正解");
	}

	return 0;

}