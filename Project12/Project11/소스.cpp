#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int array_copy(int a[], int b[], int size);

int main()
{
	int result, i;
	int x[SIZE] = { 1,2,3,4,5,0,0,0,0,0 };
	int y[SIZE] = { 0,0,3,0,5,0,0,0,0,0 };
	for (i = 0; i < 10; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", y[i]);
	}
	printf("\n");
	printf("\n");
	array_copy(x, y, SIZE);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", y[i]);
	}
	return 0;
}

int array_copy(int a[], int b[], int size)
{

	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
}
