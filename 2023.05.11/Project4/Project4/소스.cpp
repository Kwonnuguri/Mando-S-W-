#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printfmenu() // ��ȯ�Լ�
{
	printf(" �ٲٰ� ���� ������ �Է�\n");
	printf(" 'yd'�� �Է��Ͽ� 'cm'�� ��ȯ\n");
	printf(" 'cm'�� �Է��Ͽ� 'yd'�� ��ȯ\n");
	printf(" 'inch'�� �Է��Ͽ� 'cm'�� ��ȯ\n");
	printf(" 'cm'�� �Է��Ͽ� 'inch'�� ��ȯ\n");
	printf(" 'q'�Է½� ����\n");
}

double yd2cm(double yd_cm)
{
	return 91.44 * yd_cm;
}

double cm2yd(double cm_yd)
{
	return cm_yd * 0.010936;
}
double inch2cm(double inch_cm)
{
	return 2.54 * inch_cm;
}
double cm2inch(double cm_inch)
{
	return cm_inch * 0.393701;
}

int main(void)
{
	double cm;
	char choice;
	while (1) {
		printfmenu();
		printf("�޴����� �����ϼ���: ");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'yd')
		{
			printf("yd��ȯ cm��:");
			scanf("%lf", &cm);
			printf("cm��ȯ yd��: %lf \n\n", yd2cm(cm));
		}
		else if (choice == 'inch')
		{
			printf("inch��ȯ cm��: ");
			scanf("%lf", &cm);
			printf("cm��ȯ inch��: %lf \n\n", inch2cm(cm));
		}
		getchar();

	}
	return 0;
}