#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main()
{
	int prices[SIZE] = { 0 };
	int i, minimum, maximum;
	int a, b;

	srand((unsigned)time(NULL));
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%-3d ", prices[i]);
	}
	printf("\n\n");

	minimum = prices[0];
	maximum = prices[0];
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] < minimum)
		{
			minimum = prices[i];
			a = i;
		}
	}
	printf("�ּҰ��� %d �Դϴ�.\n", minimum);
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > maximum)
		{
			maximum = prices[i];
			b = i;
		}
	}
	printf("�ִ밪�� %d �Դϴ�.\n", maximum);
	printf(" �ּҰ��� �ε��� ��:%d", a);
	printf("�ִ밪�� �ε��� ��:%d", b);
	return 0;
}