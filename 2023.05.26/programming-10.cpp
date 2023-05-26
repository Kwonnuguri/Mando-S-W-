#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint() 
{
    return 10+rand() % 81; 
}

int main() 
{
    int i;

    srand(time(0));

    for (i = 0; i < 10; i++) 
    {
        int num = randint();
        printf("%d\n", num);
    }

    return 0;
}
