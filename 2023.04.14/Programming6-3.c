#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
int main()
{
	int x, y, z, small_value;

	printf("3���� ������ �Է��ϼ���.: ");
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
			printf("���� ���� ������ %d�Դϴ�.", small_value);
		}
		else if (small_value > z)
		{
			small_value = z;
			printf("���� ���� ������ %d�Դϴ�.", z);
		}
		return 0;
}
