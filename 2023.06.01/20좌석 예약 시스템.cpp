#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

int main(void)
{
	char ans1;
	int ans2, ans3, i;
	int seats[SIZE] = { 0 };
	
	while (1)
	{
		printf("�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("-------------------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf(" 11 12 13 14 15 16 17 18 19 20\n");
		printf("-------------------------------\n");

		for (i = 0; i < SIZE; i++)
			printf(" %d", seats[i]);
		printf("\n");

		printf("�� ��° �¼��� �����Ͻðڽ��ϱ�?");
		scanf("%d", &ans2);
		scanf("%d", &ans3);
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		if (seats[ans3 - 1] == 0)
		{
			seats[ans3 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�̹� ����� �ڸ��Դϴ�.\n");
	}
	return 0;
}