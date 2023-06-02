#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main(void)
{
	srand((unsigned)time(NULL));
	int list[SIZE] = { };
	for (int a = 0; a < SIZE; a++)
	{
		list[a] = rand() % 100;
		int b = rand() % 2;
		if (b == 0)    // (list[b] == 0)
			list[a] = -list[a];

	}
	int i, j, temp, least;

	for (i = 0; i < SIZE - 1; i++)
	{
		least = i;

		for (j = i + 1; j < SIZE; j++)
			if (list[j] < list[least])  // 최소값 정렬
				least = j;
		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
	return 0;
}