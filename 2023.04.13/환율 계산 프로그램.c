
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double rate; //���޷� ȯ��
	double usd; //�޷�ȭ
	int krw; //��ȭ

	printf("ȯ���� �Է��Ͻÿ�: "); //�Է� �ȳ� �޼���
	scanf("%lf", &rate); //����ڷκ��� ȯ���Է�

	printf("��ȭ �ݾ��� �Է��Ͻÿ�: "); //�Է� �ȳ� �޼���
	scanf("%d", &krw); //��ȭ �ݾ� �Է�

	usd = krw / rate; //�޷�ȭ�� ȯ��

	printf("��ȭ %d���� %lf�޷��Դϴ�.\n", krw, usd); // ��� ��� ���

	return 0; //�Լ� ����� ��ȯ
}