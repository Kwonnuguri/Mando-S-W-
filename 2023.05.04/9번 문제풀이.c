#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, tot = 0;
	do        // do while ���� Ȱ���ؼ� 0�� ������ ���ڸ� �Է��ҽ� ��� ������ ���ϴ� ���α׷��̴�.
	{
		printf("���� �Է�:");
		scanf("%d", &num);
		tot += num;
	} while (num != 0);
	printf("total=%d\n", tot);
}