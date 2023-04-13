#include <stdio.h>

int main()
{

	for (int a = 1; a <= 6; a++)
	{
		for (int b = 1; b <= 6; b++)
		{
			for (int c = 1; c <= 6; c++)
			{
				if (a + b + c == 10)
					printf("%d, %d, %d \n", a, b, c);
			}
		}
	}
}