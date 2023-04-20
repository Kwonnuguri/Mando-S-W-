#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int x, y, answer, tries;
	srand((unsigned)time(NULL));

	for (tries = 0; tries < 10; tries++)
	{
		x = rand() % 10;
		y = rand() % 10;
		printf("%d + %d =", x, y);
		scanf("%d" , & answer);
		if (x + y == answer)
			printf("정답\n");
		else
			printf("오답\n");
	}
	return 0;
}