#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	int number;
	char name[10];
	double grade;

};

int main()
{
	struct student s[2];

	printf("�й��� �Է��Ͻÿ�:");
	scanf("%d", &s[0].number);

	printf("�̸��� �Է��Ͻÿ�:");
	scanf("%s", s[0].name);

	printf("������ �Է��Ͻÿ�(�Ǽ�):");
	scanf("%lf", &s[0].grade);

	printf("\n�й�: %d\n", s[0].number);
	printf("�̸� %s\n", s[0].name);
	printf("����: %f\n", s[0].grade);

	printf("�й��� �Է��Ͻÿ�:");
	scanf("%d", &s[1].number);

	printf("�̸��� �Է��Ͻÿ�:");
	scanf("%s", s[1].name);

	printf("������ �Է��Ͻÿ�(�Ǽ�):");
	scanf("%lf", &s[1].grade);

	printf("\n�й�: %d\n", s[1].number);
	printf("�̸� %s\n", s[1].name);
	printf("����: %f\n", s[1].grade);


	return 0;
}