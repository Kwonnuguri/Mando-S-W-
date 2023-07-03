#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main()
{
    int s[20][5], i, j, max[3] = { 0 }; 

    srand(time(NULL));
    for (i = 0; i < 20; i++) {
        s[i][3] = 0;
        for (j = 0; j < 3; j++) {
            s[i][j] = rand() % 51;
            s[i][3] += s[i][j];
            if (s[i][j] > max[j]) max[j] = s[i][j];
        }
    }
    for (i = 0; i < 20; i++) {
        s[i][4] = 1; 
        for (j = 0; j < 20; j++)
            if (s[i][3] < s[j][3]) s[i][4]++;
    }

    printf("번호 중간 기말 과제 총점 평균 등수\n");
    printf("----------------------------------\n");
    for (i = 0; i < 20; i++) {
        printf("%4d ", i + 1);
        for (j = 0; j < 4; j++)
            printf("%4d ", s[i][j]);
        printf("%5.2f", s[i][3] / 3.0);
        printf("%4d\n", s[i][4]);
    }
}
