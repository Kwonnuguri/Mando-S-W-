#include <stdio.h>

int main()

{
	int narr[10] = { 1, 2, -1, -2, 1, 2, -1, -2, 1, 2 };

	int tmp = 0;
	for (int i = 0; i < sizeof(narr) / sizeof(int); i++)
		tmp += narr[i];

	printf(" °á°ú = %d ", tmp);

}
///////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
	int dec = 17;
	int biny[20] = { 0 };
	int p = 0;

	for (; ; )
	{
		biny[p] = dec % 2;
		dec = dec / 2;
		p++;
		if (dec == 0)
			break;
	}

	for (int i = p - 1; i >= 0; i--)
		printf("%d", biny[i]);
	return 0;
}

/////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
void main() {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {

			if (i == j) {
				printf("%d", i);
			}
			else if (i + j == 10) {
				printf("%d", i);
			}
			else printf("0");
		}
		printf("\n");
	}
}

void print(int x)
{
	for (int i = 0; i < x; i++)
	{
		int tr = (x / 2 - i);

		if (tr < 0)
		{
			tr = -tr;
		}
		else {
			tr = tr;
		}

		for (int j = 0; j < tr; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * (x / 2 - tr) + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int input = 9;
	print(input);

	return 0;
}