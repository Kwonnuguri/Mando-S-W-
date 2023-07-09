#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 20
#define cols 6

int main(void) {
	srand((unsigned)time(NULL));
	int score[rows][cols];
	int sort[rows];

	int num = 1;

	for (int i = 0; i < rows; i++)
	{ 
		score[i][0] = num++; 
		score[i][1] = rand() % 51; 
		score[i][2] = rand() % 31; 
		score[i][3] = rand() % 21; 
		score[i][4] = score[i][1] + score[i][2] + score[i][3]; 
	}

	for (int i = 0; i < rows; i++) 
	{ 
		sort[i] = score[i][4];
	}

	int temp, least;
	for (int i = 0; i < rows - 1; i++)
	{ 
		least = i;
		for (int j = i + 1; j < rows; j++)
			if (sort[j] > sort[least])
				least = j;
		temp = sort[i];
		sort[i] = sort[least];
		sort[least] = temp;
	}

	int count = 0;
	int grade = 1;
	for (int i = 0; i < rows; i++)
	{ 
		count++;
		for (int j = 0; j < rows; j++)
		{
			if (i != 0) 
			{ 
				if (sort[i] != sort[i - 1])  
					grade = count;
			}
			if (score[j][4] == sort[i])
				score[j][5] = grade;
		}
	}

	printf("번호\t중간\t기말\t과제\t총점\t등수\n");
	for (int i = 0; i < rows; i++)
	{ 
		for (int j = 0; j < cols; j++)
		{
			printf("%d\t ", score[i][j]);
		}
		printf("\n");
	}
}