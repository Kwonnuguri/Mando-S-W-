#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int first_answer = 0;
	int second_answer = 0;
	
	for (i = 1; i <= 30; i++)
	{ 
		first_answer += i * i + 1;
	}
	printf("ù��° ������ ���� %d \n", first_answer);
	for (j = 0; j <= 5; j++)
	{
		for (i = 10; i <= 30; i++)
			second_answer += i + j;
	}
	printf("�ι�° ������ ���� %d \n", second_answer);
	
	return 0;
}