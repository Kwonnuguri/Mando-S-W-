#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	printf("정수 2개를 입력하시오:\n");
	scanf_s("%d %d", &x, &y);

	if (x > y)
	{
		printf("큰수는 x %d 입니다.\n", x);
	}
	else if (y > x)
	{
		printf("큰수는 y %d 입니다.\n", y);
	}
	return 0;
}