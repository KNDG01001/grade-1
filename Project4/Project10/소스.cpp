#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double cm, fit, inch;
	printf("Ű : ");
	scanf("%lf", cm);
	inch = cm * 2.54;
	fit = inch * 12;
	printf("%lf cm�� %lf ��Ʈ %lf ��ġ�Դϴ�.", cm, fit, inch);
	return 0;
}