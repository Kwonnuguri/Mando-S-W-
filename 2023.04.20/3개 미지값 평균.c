#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main(void)
{
	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double avrg = 0;
	double sum = 0;

	printf("3���� ���ڸ� �Է��Ͻÿ�:\n");
	scanf_s("%lf", &num1);
	scanf_s("%lf", &num2);
	scanf_s("%lf", &num3);

	sum = num1 + num2 + num3;
	avrg = sum / 3;

	printf("\a3���� ������ ����� %.2lf �Դϴ�.", avrg);

	return 0;
}