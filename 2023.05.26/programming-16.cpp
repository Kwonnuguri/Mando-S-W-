#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���� �˰����� �������� �ʱ⿡ ���� �ٸ� �ο����� �ڵ带 ���� �����ϵ��� �ϰڽ��ϴ�.
int menu()
{
	int n;
	printf("********** Welcome to Express ATM **********\n");
	printf("<1> �ܾ�\n");
	printf("<2> �Ա�\n");
	printf("<3> ���\n");
	printf("<4> ����\n");
	printf("�޴��� �����Ͻÿ�: \n");
	scanf("%d", &n);
	return n;

}

int deposit()
{
	int n;
	printf("�Ա� �ݾ��� �Է��Ͻÿ�: \n");
	scanf("%d", &n);
	printf("�ܰ�� %d���Դϴ�.", n);
	return 0;
}
