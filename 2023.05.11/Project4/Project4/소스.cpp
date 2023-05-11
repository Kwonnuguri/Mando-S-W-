#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printfmenu() // 변환함수
{
	printf(" 바꾸고 싶은 단위를 입력\n");
	printf(" 'yd'를 입력하여 'cm'로 변환\n");
	printf(" 'cm'를 입력하여 'yd'로 변환\n");
	printf(" 'inch'를 입력하여 'cm'로 변환\n");
	printf(" 'cm'를 입력하여 'inch'로 변환\n");
	printf(" 'q'입력시 종료\n");
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
		printf("메뉴에서 선택하세요: ");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'yd')
		{
			printf("yd변환 cm값:");
			scanf("%lf", &cm);
			printf("cm변환 yd값: %lf \n\n", yd2cm(cm));
		}
		else if (choice == 'inch')
		{
			printf("inch변환 cm값: ");
			scanf("%lf", &cm);
			printf("cm변환 inch값: %lf \n\n", inch2cm(cm));
		}
		getchar();

	}
	return 0;
}