#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	int i;

	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("%d�� ����� : ", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}