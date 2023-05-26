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

    printf("문자를 입력하시오: ");
    scanf("%c", &input);

    if (check_alpha(input))
    {
        printf("%c는 알파벳 문자입니다.\n", input);
    }
    else
    {
        printf("입력한 문자는 알파벳이 아닙니다.\n");
    }

    return 0;
}