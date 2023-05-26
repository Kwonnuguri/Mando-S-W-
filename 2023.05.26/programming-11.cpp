#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice() 
{
    return (rand() % 6) + 1;
}

int main(void)
{
    int user_total = 0, computer_total = 0;
    srand(time(NULL));

    int dice1, dice2, dice3;
    dice1 = dice();
    dice2 = dice();
    dice3 = dice();
    user_total = dice1 + dice2 + dice3;

    int dice4, dice5, dice6;
    dice4 = dice();
    dice5 = dice();
    dice6 = dice();
    computer_total = dice4 + dice5 + dice6;


    printf("사용자 주사위= (%d %d %d)=%d\n", dice1, dice2, dice3, user_total);
    printf("컴퓨터 주사위= (%d %d %d)=%d\n", dice4, dice5, dice6, computer_total);

    if (user_total > computer_total) 
    {
        printf("사용자 승리!\n");
    }
    else if (user_total < computer_total) 
    {
        printf("컴퓨터 승리!\n");
    }
    else 
    {
        printf("비겼습니다. !\n");
    }

    return 0;
}