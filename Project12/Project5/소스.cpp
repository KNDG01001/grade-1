#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	srand((unsigned)time(NULL));
	int arry[10];
	int min;
	for (int i = 0; i < 10; i++)
	{
		arry[i] = rand() % 101;
	}
	printf("----------------------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d   ", i + 1);
	}
	printf("\n");
	printf("----------------------------------------\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", arry[i]);
	}
	printf("\n");
	printf("\n");
	min = 100;
	for (int i = 0; i < 10; i++)
	{
		if (arry[i] < min)
		{
			min = arry[i];
		}
	}
	printf("ÃÖ¼Ò°©Àº %d", min);
	return 0;
}
