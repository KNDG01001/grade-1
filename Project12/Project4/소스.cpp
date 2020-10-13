#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6

int main()
{
	srand((unsigned)time(NULL));
	int freg[SIZE] = { 0 };
	int i;

	for (i = 0; i < 1000; i++)
	{
		++freg[rand() % 6];
	}
	printf("====================\n");
	printf("¸é ºóµµ\n");
	printf("====================\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%3d %3d \n", i + 1, freg[i]);
	}
	return 0;
}