#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main()
{
	double x, fx;

	printf("x�� ���� �Է��ϼ���.:");
	scanf_s("%lf", &x);

	if (x <= 0)
		fx = x * x - 9.0 * x + 2.0;
	else
		fx = 7.0 * x + 2.0;
	printf("f(x)�� ���� %f\n", fx);
	return 0;
}