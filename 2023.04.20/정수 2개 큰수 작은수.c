#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;
	printf("���� 2���� �Է��Ͻÿ�:\n");
	scanf_s("%d %d", &x, &y);

	if (x > y)
	{
		printf("ū���� x %d �Դϴ�.\n", x);
	}
	else if (y > x)
	{
		printf("ū���� y %d �Դϴ�.\n", y);
	}
	return 0;
}