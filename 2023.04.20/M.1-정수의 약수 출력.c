#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i =0;
	int number =0;

	printf("정수입력를 입력하시오: \n");
	scanf("%d", &number);

	printf("입력하신 %d%의 약수", number);
	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d", i);
		}
	}
	
	return 0;

}