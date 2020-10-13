#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
	srand((unsigned)time(NULL));
	int X[SIZE];
	int i;
	int min = 100;
	int max = 0;

	for (i = 0; i < SIZE; i++)
	{
		X[i] = rand();
	}
	for (i = 0; i < 10; i++)
	{
		if (X[i] < min)
		{
			min = X[i];
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (X[i] > max)
		{
			max = X[i];
		}
	}
	printf("최대값은 %d\n", max);
	printf("최소값은 %d", min);
	return 0;
}