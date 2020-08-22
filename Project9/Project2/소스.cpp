#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int b_rand()
{
	return (rand() % 2);
}

int main()
{
	int i, n;
	char j;

	do
	{
		srand(time(NULL));
		n = b_rand();

		printf("앞면또는 뒷면: ");
		scanf("%d", &i);
		if (n == i)
			printf("맞았습니다!\n");
		else
			printf("틀렸습니다!\n");

		printf("계속하시겠습니까?(y또는n):");
		fflush(stdin);
		scanf("%c", &j);
	} while (j != 'n');
}