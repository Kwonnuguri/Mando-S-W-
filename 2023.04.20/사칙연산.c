#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double 반지름;
	double 면적;

	printf("반지름을 입력하시오:\n", 반지름);
	scanf("%lf", &반지름);

	printf("면적을 입력하시오:\n", 면적);
	scanf("%lf", 면적);

	return 0;
}