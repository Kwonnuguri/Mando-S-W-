#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student
{
	int number;
	char name[10];
	double grade;

};

int main()
{
	struct student s;

	printf("�й��� �Է��ϼ���");
	scanf("%d", &s.number);

	printf("�̸��� �Է��ϼ���");
	scanf("%s", s.name);

	printf("������ �Է��ϼ���");
	scanf("%lf", &s.grade);


	printf("%d\n", s.number);
	printf("%s\n", s.name);
	printf("%.2f\n", s.grade);


	return 0;

}