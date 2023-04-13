#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100; //정답을 난수로 발생한다.
	int guess;
	int tries = 0;
	// 반복 구조

	do {
		if (tries > 5)
		{
			printf("축하합니다 실패했습니다. 시도횟수=%d\n", tries);
			break;
		}
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;
		
		if (guess > answer) //사용자가 입력한 정수가 정답보다 높으면
			printf("숫자가 큽니다 \n");
		if (guess < answer) //사용자가 입력한 정수가 정답보다 낮으면
			printf("숫자가 작습니다 \n");
	} while (guess != answer);

	printf("축하합니다. 시도횟수=%d\n", tries);
	return 0;


}