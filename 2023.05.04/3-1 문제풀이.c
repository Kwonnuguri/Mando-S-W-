#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%x\n", 0x20 << 2); //  0010 0000 �������� 2�� �̵�  �� 1000 0000  = 80�� ��µǰ� �ȴ�.
	return 0;
}