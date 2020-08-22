#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
		printf("%d", (rand() % 2));
	printf("\n");
}