#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main()
{
	int cm;
	int age;
	printf("키를 입력하시오(cm):\n");
	scanf_s("%d" , &cm);
	printf("나이를 입력하시오(age):\n");
	scanf_s("%d", &age);

	if (cm >= 140 && age >= 10)
		printf("타도 좋습니다");
	else printf("죄송합니다");

	return 0;
}