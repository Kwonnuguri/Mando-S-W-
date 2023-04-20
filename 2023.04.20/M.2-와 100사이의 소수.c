#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0;
	int number = 0;

	for (i = 2; i <= 100; i++)
	{
		for(number =2; number<=i; number++)
		{
			if (i % number == 0)
				break;
		}
		if (i == number)
			printf("%d", i);
	}

	return 0;

}