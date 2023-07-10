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

	printf("학번을 입력하세요");
	scanf("%d", &s.number);

	printf("이름을 입력하세요");
	scanf("%s", s.name);

	printf("학점을 입력하세요");
	scanf("%lf", &s.grade);


	printf("%d\n", s.number);
	printf("%s\n", s.name);
	printf("%.2f\n", s.grade);


	return 0;

}