#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// (x,y)��ǥ�� �Է� �޾Ƽ� ��ǥ�� ���ϴ� ��и��� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.(��) x, y��ǥ�� �Է��Ͻÿ�: 10 20 -> 1��и��Դϴ�.

int main()
{
	int x;
	int y;

	printf("x , y��ǥ�� �Է��ϼ���.: ");
	scanf("%d %d", &x, &y); 

	if (x > 0)//x,y �� ��ǥ�� �����ؾ� �ϱ⿡ �ߺ� if ���� ����.
	{
		if (y > 0)
			printf("1��и��Դϴ�.");
		else
			printf("4��и��Դϴ�.");
	}
	else
	{
		if (y > 0)
			printf("2��и��Դϴ�.");
		else
			printf("3��и��Դϴ�.");
	}
	return 0;
}