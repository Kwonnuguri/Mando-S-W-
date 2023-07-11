#include <stdio.h>
#include <stdlib.h>
#include <time.h>	
#define SIZE 20

int main()
{
	//int COUNT[SIZE] = { 18, 13, 2, 7, 43, 12, 65, 34, 52, 32 };
	srand((unsigned)time(NULL));
	int COUNT[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		COUNT[i] = rand();
	}

	int max = COUNT[0];
	int min = COUNT[0];
	
	int i;

	for (int i = 0; i < SIZE; i++)
	{
		if (COUNT[i] > max) max = COUNT[i];
		if (COUNT[i] < min) min = COUNT[i];
	}
	printf("max = %d\n", max); 
	printf("min = %d\n", min);

	return 0;
}