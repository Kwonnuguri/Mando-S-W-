#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main()
{
	int cm;
	int age;
	printf("Ű�� �Է��Ͻÿ�(cm):\n");
	scanf_s("%d" , &cm);
	printf("���̸� �Է��Ͻÿ�(age):\n");
	scanf_s("%d", &age);

	if (cm >= 140 && age >= 10)
		printf("Ÿ�� �����ϴ�");
	else printf("�˼��մϴ�");

	return 0;
}