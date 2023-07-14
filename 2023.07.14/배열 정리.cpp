#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void random(int ppp[], int size)
{
	srand((unsigned)time(NULL));

	for (int i = 0; i < size; i++)
	{
		ppp[i] = rand() % 100;
	}
}
void print(int ppp[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("[%d]", i);
		printf("%d\n", ppp[i]);
	}
	printf("\n");
}

void change(int ppp[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (ppp[j] > ppp[j + 1])
			{
				int temp = ppp[j];
				ppp[j] = ppp[j + 1];
				ppp[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int ppp[SIZE];

	random(ppp, SIZE);

	printf("초기 난수배열: \n");
	print(ppp, SIZE);

	change(ppp, SIZE);

	printf("크기 순서 난수배열: \n");
	print(ppp, SIZE);

	return 0;
}