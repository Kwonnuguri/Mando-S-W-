#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	for (int i = 0; i < 10; i += 2)   // 0 출력 2 출력 4 출력 6출력 8출력 10은 주어진 조건문에 부합함으로 출력되지 않는다.
		printf("%d\n", i);
	return 0;
}