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
	strcpy(s.name, "����");
	s.grade = 4.3;


	printf("�й�:%d\n", s.number);
	printf("�̸�:%s\n", s.name);
	printf("����:%.2f\n", s.grade);


	return 0;

}