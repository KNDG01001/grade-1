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

		printf("�ո�Ǵ� �޸�: ");
		scanf("%d", &i);
		if (n == i)
			printf("�¾ҽ��ϴ�!\n");
		else
			printf("Ʋ�Ƚ��ϴ�!\n");

		printf("����Ͻðڽ��ϱ�?(y�Ǵ�n):");
		fflush(stdin);
		scanf("%c", &j);
	} while (j != 'n');
}