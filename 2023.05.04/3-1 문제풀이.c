#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%x\n", 0x20 << 2); //  0010 0000 왼쪽으로 2번 이동  즉 1000 0000  = 80이 출력되게 된다.
	return 0;
}