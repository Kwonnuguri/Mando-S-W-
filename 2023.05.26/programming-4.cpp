#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_alpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char input;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &input);

    if (check_alpha(input))
    {
        printf("%c�� ���ĺ� �����Դϴ�.\n", input);
    }
    else
    {
        printf("�Է��� ���ڴ� ���ĺ��� �ƴմϴ�.\n");
    }

    return 0;
}