#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 3

struct student
{
	int number;
	char name;
	double grade;
};


int main() {

	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++) {
		printf("�й��� �Է��ϼ���");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��ϼ���");
		scanf("%s", &list[i].name);
		printf("������ �Է��ϼ���");
		scanf("%lf", &list[i].grade);

	}

	for (i = 0; i < SIZE; i++)
		printf("�̸�:%d ����:%lf", list[i].name, list[i].grade);

	return 0;

}