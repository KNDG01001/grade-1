#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double cm, fit, inch;
	printf("키 : ");
	scanf("%lf", cm);
	inch = cm * 2.54;
	fit = inch * 12;
	printf("%lf cm는 %lf 피트 %lf 인치입니다.", cm, fit, inch);
	return 0;
}