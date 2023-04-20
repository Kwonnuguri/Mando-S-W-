#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int x = 0;
	int y = 1;
	int n = 0;
	int tries = 0;

	printf("생성하고 싶은 피보나치항수-입력:");
	scanf("%d", &tries);

	for (i = 0; i < tries; i++)
	{
		printf("%d\n", x);

		n = x + y;
		x = y;
		y = n;

	}
	return 0;
}