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

	printf("학번을 입력하시오:");
	scanf("%d", &s[0].number);

	printf("이름을 입력하시오:");
	scanf("%s", s[0].name);

	printf("학점을 입력하시오(실수):");
	scanf("%lf", &s[0].grade);

	printf("\n학번: %d\n", s[0].number);
	printf("이름 %s\n", s[0].name);
	printf("학점: %f\n", s[0].grade);

	printf("학번을 입력하시오:");
	scanf("%d", &s[1].number);

	printf("이름을 입력하시오:");
	scanf("%s", s[1].name);

	printf("학점을 입력하시오(실수):");
	scanf("%lf", &s[1].grade);

	printf("\n학번: %d\n", s[1].number);
	printf("이름 %s\n", s[1].name);
	printf("학점: %f\n", s[1].grade);


	return 0;
}