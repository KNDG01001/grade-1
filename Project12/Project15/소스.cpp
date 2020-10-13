#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int main()
{
	int test[10][3];
	int max = 0;
	int min = 900;
	int n;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			test[i][j] = rand() % 101;
		}
	}
	while (1)
	{
		printf("시험");
		scanf("%d", &n);
		for (int i = 0; i < 10; i++)
		{
			if (max < test[i][n - 1])
			{
				max = test[i][n - 1];
			}
		}
		for (int i = 0; i < 10; i++)
		{
			if (min > test[i][n - 1])
			{
				min = test[i][n - 1];
			}
		}
		printf("시험 #%d의 최대점수=%d\n", n, max);
		printf("시험 #%d의 최소점수=%d\n", n, min);
		max = 0;
		min = 900;
	}
	return 0;
}