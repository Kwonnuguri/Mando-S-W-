#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i =0;
	int number =0;

	printf("�����Է¸� �Է��Ͻÿ�: \n");
	scanf("%d", &number);

	printf("�Է��Ͻ� %d%�� ���", number);
	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			printf("%d", i);
		}
	}
	
	return 0;

}