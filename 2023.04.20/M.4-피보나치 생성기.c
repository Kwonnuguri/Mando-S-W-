#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int x = 0;
	int y = 1;
	int n = 0;
	int tries = 0;

	printf("�����ϰ� ���� �Ǻ���ġ�׼�-�Է�:");
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