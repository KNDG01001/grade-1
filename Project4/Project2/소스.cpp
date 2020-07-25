#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double mile, m;
	printf("마일을 입력하시오. : ");
	scanf("%lf", &mile);
	m = mile * 1.609;
	printf("%lf 마일은 %lf 미터입니다.", mile, m);
	return 0;
}