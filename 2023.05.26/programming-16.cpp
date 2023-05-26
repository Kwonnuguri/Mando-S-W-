#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//아직 알고리즘이 떠오르지 않기에 추후 다른 인원들의 코드를 보고 공부하도록 하겠습니다.
int menu()
{
	int n;
	printf("********** Welcome to Express ATM **********\n");
	printf("<1> 잔액\n");
	printf("<2> 입금\n");
	printf("<3> 출금\n");
	printf("<4> 종료\n");
	printf("메뉴를 선택하시오: \n");
	scanf("%d", &n);
	return n;

}

int deposit()
{
	int n;
	printf("입금 금액을 입력하시오: \n");
	scanf("%d", &n);
	printf("잔고는 %d원입니다.", n);
	return 0;
}
