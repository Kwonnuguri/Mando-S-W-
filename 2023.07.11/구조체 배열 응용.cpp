#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

void main()
{
    int s[20][5];
    int i;
    int j;
    int max[SIZE] = { 0 };

    srand(time(NULL));
    for (i = 0; i < 20; i++) 
    {
        s[i][SIZE] = 0;
        for (j = 0; j < 3; j++)
        {
            s[i][j] = rand() % 51;
            s[i][SIZE] += s[i][j];
            if (s[i][j] > max[j]) max[j] = s[i][j];
        }
    }
    for (i = 0; i < 20; i++) 
    {
        s[i][4] = 1;
        for (j = 0; j < 20; j++)
            if (s[i][SIZE] < s[j][SIZE]) s[i][4]++;
    }

    printf("번호 중간 기말 과제 총점 평균 등수\n");
    printf("----------------------------------\n");
    for (i = 0; i < 20; i++) 
    {
        printf("%4d ", i + 1);
        for (j = 0; j < 4; j++)
            printf("%4d ", s[i][j]);
        printf("%5.2f", s[i][SIZE] / 3.0);
        printf("%4d\n", s[i][4]);
    }
}