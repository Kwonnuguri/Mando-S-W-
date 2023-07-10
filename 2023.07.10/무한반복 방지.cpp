#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char op;
	char txt = 0;
	int a, b, result;
	int q = 0;



	while (1)
	{
	printf("원하는 수식을 선택하시오(예:a + b) ");
	scanf("%d %c %d %c", &a, &op, &b, &txt);
	if (txt == 'q') break;

	switch (op)
	{
	case '+':
		printf("덧셈 결과는 %d입니다. \n\n", a + b);
		break;
	case '-':
		printf("뺄셈 결과는 %d입니다. \n\n", a - b);
		break;
	case '*':
		printf("곱셈 결과는 %d입니다. \n\n", a * b);
		break;
	case '/':
		printf("나눗셈 결과는 %d입니다. \n\n", a / b);
		break;
	default :
		printf("다시 입력하세요 \n\n");
		printf("무한반복 q누르면 종료: ");
		break;

	}
	}
	return 0;
}