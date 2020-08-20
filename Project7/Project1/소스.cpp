#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);
	return 0;
}