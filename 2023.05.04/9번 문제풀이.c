#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, tot = 0;
	do        // do while 문을 활용해서 0을 제외한 숫자를 입력할시 모든 정수를 더하는 프로그램이다.
	{
		printf("정수 입력:");
		scanf("%d", &num);
		tot += num;
	} while (num != 0);
	printf("total=%d\n", tot);
}