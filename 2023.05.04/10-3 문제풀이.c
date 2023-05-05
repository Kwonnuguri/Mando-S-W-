#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,y;
	for (x = 0; x < 3; x++)   // 0 1 2  즉 3번의 반복이 이루어짐.
		for (y = 2; y >= 0; y--) // 2 1 0  즉 3번의 반복이 이루어짐.  이에 중복 for문을 활용하여 3 X 3 9번의 반복이 이루어진다.
			printf("*");
}