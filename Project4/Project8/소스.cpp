#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double a, b, sum, c, t;
	printf("�Ǽ��� �Է��Ͻÿ�. :");
	scanf("%lf %lf", &a, &b);
	sum = a + b;
	c = a - b;
	t = a / b;
	printf("�� : %lf, �� : %lf, �� : %lf", sum, c, t);
	return 0;
}