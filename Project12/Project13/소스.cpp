#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number[10];
	int max = 0;
	int n;
	srand((unsigned)time(NULL));
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			number[i] = rand() % 10;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (max < number[i])
		{
			max = number[i];
			n = i;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", number[i]);
	}
	printf("\n가장 많이 나온수=%d", n);
	return 0;
}