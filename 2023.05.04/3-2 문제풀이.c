#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);  // c�� ���� 100 ���ų� 200���� ū ���� ���;��Ѵ�. a �� ���� ���̱⿡ ��µǴ� ���� 1�̴�.
	printf("%d\n", c);
	return 0;
}