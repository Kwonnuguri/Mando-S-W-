#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
    int number = 0;
    int turn = 0;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    do {
        turn = number % 10;
        number = number / 10;
        printf("%d", turn);
        } 
    while (number != 0);

    return 0;

}