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

	s.number = 2023001;
	strcpy(s.name, "권혁");
	s.grade = 4.3;


	printf("학번:%d\n", s.number);
	printf("이름:%s\n", s.name);
	printf("학점:%.2f\n", s.grade);


	return 0;

}