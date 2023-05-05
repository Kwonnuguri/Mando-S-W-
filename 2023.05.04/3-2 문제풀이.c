#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);  // c의 값은 100 같거나 200보다 큰 수가 나와야한다. a 의 값이 참이기에 출력되는 값은 1이다.
	printf("%d\n", c);
	return 0;
}