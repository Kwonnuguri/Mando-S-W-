#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	char txt = 0;
	int a, b, result;
	int q = 0;



	while (1)
	{
	printf("���ϴ� ������ �����Ͻÿ�(��:a + b) ");
	scanf("%d %c %d %c", &a, &op, &b, &txt);
	if (txt == 'q') break;

	switch (op)
	{
	case '+':
		printf("���� ����� %d�Դϴ�. \n\n", a + b);
		break;
	case '-':
		printf("���� ����� %d�Դϴ�. \n\n", a - b);
		break;
	case '*':
		printf("���� ����� %d�Դϴ�. \n\n", a * b);
		break;
	case '/':
		printf("������ ����� %d�Դϴ�. \n\n", a / b);
		break;
	default :
		printf("�ٽ� �Է��ϼ��� \n\n");
		printf("���ѹݺ� q������ ����: ");
		break;

	}
	}
	return 0;
}