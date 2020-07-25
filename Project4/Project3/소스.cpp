#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double area, h, b;
	printf("»ï°¢ÇüÀÇ ¹Øº¯ : ");
	scanf("%lf", &b);
	printf("»ï°¢ÇüÀÇ ³ôÀÌ : ");
	scanf("%lf", &h);
	area = 0.5 * h * b;
	printf("»ï°¢ÇüÀÇ ³ĞÀÌ : %lf", area);
	return 0;
}