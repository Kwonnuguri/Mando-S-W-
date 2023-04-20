#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double num1;
	double num2;
	double num3;
	double avrg;
	double sum;

	printf("3개의 숫자를 입력하시오:\n");
	scanf("%lf", num1);
	scanf("%lf", num2);
	scanf("%lf", num3);

	sum = num1 + num2 + num3;
	avrg = sum / 3;

	printf("3개의 숫자의 평균은 %lf 입니다.", avrg);
	

}