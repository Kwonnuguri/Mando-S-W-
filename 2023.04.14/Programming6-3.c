#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
int main()
{
	int x, y, z, small_value;

	printf("3개의 정수를 입력하세요.: ");
		scanf_s("%d %d %d", &x, &y, &z);

		if (x > y)
		{
			small_value = y;
		}
		else if (y > x)
		{
			small_value = x;
		}
		if (small_value < z)
		{
			printf("제일 작은 정수는 %d입니다.", small_value);
		}
		else if (small_value > z)
		{
			small_value = z;
			printf("제일 작은 정수는 %d입니다.", z);
		}
		return 0;
}
