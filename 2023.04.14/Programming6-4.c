#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand((unsigned)time(NULL));
	int com = (rand() %3 + 1);
	int me;
	printf("����: 1 ����: 2 ��: 3 �����ϼ���");
	scanf_s("%d", &me);
	if (me == 1 && com == 2)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (me == 1 && com == 3)
		printf("����ڰ� �̰���ϴ�.\n");
	else if (me == 2 && com == 1)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (me == 2 && com == 3)
		printf("����ڰ� �̰���ϴ�.\n");
	else if (me == 3 && com == 1)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (me == 3 && com == 2)
		printf("����ڰ� �̰���ϴ�.\n");
	else printf("�����ϴ�.\n");

	printf("��ǻ���� ����: %d " ,com);

	return 0;    
}
/*stdlib�� ���ؼ� �ٽ��ѹ� �ͼ����� �ʿ䰡 ������ ����.*/