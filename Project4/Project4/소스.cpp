#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double F, C;
	printf("È­¾¾ : ");
	scanf("%lf", F);
	C = (5.0 / 9.0) * (F - 32.0);
	printf("¼·¾¾´Â %lf ÀÔ´Ï´Ù.", C);
	return 0;
}