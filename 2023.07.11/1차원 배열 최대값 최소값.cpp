#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	srand((unsigned)time(NULL));
	int i, max, min;
	int x[SIZE] = {0};

	for (i=0; i < 10; i++)
	{
		x[i] = rand();
		printf("%d \n", x[i]);
	}
	min = x[0];
	max = x[0];

	for (i = 0; i < 10; i++)
	{
		if (x[i] < min)
			min = x[i];
		else if (x[i] > max)
			max = x[i];
	}
	printf("�ִ밪�� %d \n�ּҰ��� %d", max, min);
	return 0;
}