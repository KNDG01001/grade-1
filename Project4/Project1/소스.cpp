#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	int a, b, c, sum;
	float average;
	printf("실수 :");
	scanf("%d", &a);
	printf("실수 :");
	scanf("%d", &b);
	printf("실수 :");
	scanf("%d", &c);
	sum = a + b + c;
	printf("합은 %d 입니다\n", sum);
	average = (a + b + c) / 3;
	printf("평균은 %f 입니다\n", average);
	return 0;
}