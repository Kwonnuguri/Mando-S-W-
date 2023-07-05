#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_image(int image[SIZE][SIZE])
{
	int r, c;
	for (r = 0; r < SIZE; r++)
	{
		for (c = 0; c < SIZE; c++)
		{
			printf("%2d", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}
void brighten_image(int image[SIZE][SIZE])
{
	int i;
	int r, c;
	int* p;
	p = &image[0][0];
		for (r = 0; r < SIZE; r++)
		{
			for (c = 0; c < SIZE; c++)
			{
				if (c == r)
					image[c][r] = 0;
			}
		}
}
int main()
{
	int rand_image();
	int i;
	srand((unsigned)time(NULL));
	for (i = 1; i < 26; i++)
	{

		int image[SIZE][SIZE] = { 0 };

		print_image(image);
		brighten_image(image);
		print_image(image);

		return 0;

	}
}