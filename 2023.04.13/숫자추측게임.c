#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int answer = rand() % 100; //������ ������ �߻��Ѵ�.
	int guess;
	int tries = 0;
	printf("%d", answer);
	// �ݺ� ����
	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("high \n");
		if (guess < answer) //����ڰ� �Է��� ������ ���亸�� ������
			printf("low \n");
	} while (guess != answer);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);

	return 0;


}