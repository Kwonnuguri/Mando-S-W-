#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0x10;   // 0001 0000
	for (; i; i >>= 1)  // ���������� 1���� �̵�   00010000 -> 00001000 -> 00000100 -> 00000010 -> 00000001 -> 00000000(��� X)
		printf("hello");
	return 0;
}