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
		printf("\n�¼��� �����Ͻðڽ��ϱ�?(y �Ǵ� n) ");
		scanf(" %c", &ans1);

		if (ans1 == 'n')
			break;
		printf("-------------------------------\n");
		printf(" 1 2 3 4 5 6 7 8 9 10\n");
		printf(" 11 12 13 14 15 16 17 18 19 20\n");
		printf("-------------------------------\n");

		printf("�����Ͻ� 2���� �¼��� �����Ͻðڽ��ϱ�?");
		scanf("%d", &ans2);
		scanf("%d", &ans3);
		if (seats[ans2 - 1] == 0)
		{
			seats[ans2 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�����Ͻ� 1��° �ڸ��� �̹� ����� �ڸ��Դϴ�.\n");
		if (seats[ans3 - 1] == 0)
		{
			seats[ans3 - 1] = 1;
			printf("����Ǿ����ϴ�.\n");
		}
		else
			printf("�����Ͻ� 2��° �ڸ��� �̹� ����� �ڸ��Դϴ�.\n");

		for (int i = 0; i < SIZE; i++)
		{
			if (i == 9)
				printf("\n");
			if (seats[i] > 0)
				printf(" 0");
			else
				printf(" %d", i + 1);
		}
	}
	return 0;
}