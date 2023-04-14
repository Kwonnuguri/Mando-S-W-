#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int com = (rand() %3 + 1);
	int me;
	printf("가위: 1 바위: 2 보: 3 선택하세요");
	scanf_s("%d", &me);
	if (me == 1 && com == 2)
		printf("컴퓨터가 이겼습니다.\n");
	else if (me == 1 && com == 3)
		printf("사용자가 이겼습니다.\n");
	else if (me == 2 && com == 1)
		printf("컴퓨터가 이겼습니다.\n");
	else if (me == 2 && com == 3)
		printf("사용자가 이겼습니다.\n");
	else if (me == 3 && com == 1)
		printf("컴퓨터가 이겼습니다.\n");
	else if (me == 3 && com == 2)
		printf("사용자가 이겼습니다.\n");
	else printf("비겼습니다.\n");

	printf("컴퓨터의 선택: %d " ,com);

	return 0;    
}
/*stdlib에 대해선 다시한번 익숙해질 필요가 있을거 같다.*/