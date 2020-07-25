#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double a, b, sum, c, t;
	printf("실수를 입력하시오. :");
	scanf("%lf %lf", &a, &b);
	sum = a + b;
	c = a - b;
	t = a / b;
	printf("합 : %lf, 차 : %lf, 몫 : %lf", sum, c, t);
	return 0;
}