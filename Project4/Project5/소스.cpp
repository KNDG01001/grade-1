#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	float x, sum;
	printf("실수는? : ");
	scanf("%f", x);
	sum = 3 * x * x + 7 * x + 11;
	printf("다항식의 값은 %f입니다.", sum);
	return 0;
}