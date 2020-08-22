#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void)
{
	double i;
	for (i = 1; i <= 5; i++)
		printf("%lf\n", (rand() / (double)RAND_MAX));
	printf("\n");
}