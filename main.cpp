#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <functional>

typedef void(*PFunc)(int*);

//�R�[���o�b�N�֐�
void DispResult(int* time) {

	printf("%d�b�҂��Ď��s���ꂽ��\n", *time / 1000);

}

void setTimeout(PFunc result, int second) {
	//�R�[���o�b�N�֐����Ăяo��
	Sleep(second);

	result(&second);
}
int main(void) {

	//���Ԃ��擾
	unsigned int currentime = (unsigned int)time(nullptr);

	//�����̏�����
	int randomNumber = rand();

	PFunc result;
	result = DispResult;
	int num;




	printf("��(�)��������1�C��(���R)��������2�����\n");
	scanf_s("%d", &num);
	while (num != 1 && num != 2)
	{
		printf("������x����\n");
		scanf_s("%d", &num);
	}
	//������1�`6����
	randomNumber = rand() % 6 + 1;
	printf("�T�C�R���̖ڂ�%d\n", randomNumber);
	setTimeout(result, 3000);

	if ((randomNumber % 2 == 1 && num == 1) || (randomNumber % 2 == 0 && num == 2)) {
		printf("����");
	}
	
	else
	{
		printf("�s����");
	}

	return 0;

}