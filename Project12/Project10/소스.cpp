#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int array_equal(int a[], int b[], int size);
int time = 0;

int main()
{
	int result, i;
	int x[SIZE] = { 1,2,3,4,5,0,0,0,0,0 };
	int y[SIZE] = { 0,0,3,0,5,0,0,0,0,0 };
	result = array_equal(x, y, SIZE);
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
	if (result == 0)
	{
		printf("모두 다르다");
	}
	else if (result == 1)
	{
		printf("모두 같다");
	}
	else
	{
		printf("%d개의 배열은 다름", time);
	}

	return 0;
}

int array_equal(int a[], int b[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (a[i] != b[i])
		{
			++time;
		}
	}
	if (time == size) return 0;
	else if (time == 0) return 1;
}