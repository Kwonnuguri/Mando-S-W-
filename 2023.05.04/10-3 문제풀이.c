#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x,y;
	for (x = 0; x < 3; x++)   // 0 1 2  �� 3���� �ݺ��� �̷����.
		for (y = 2; y >= 0; y--) // 2 1 0  �� 3���� �ݺ��� �̷����.  �̿� �ߺ� for���� Ȱ���Ͽ� 3 X 3 9���� �ݺ��� �̷������.
			printf("*");
}