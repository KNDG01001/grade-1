#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#define pi 3.141592

double round(double a)
{
	return (int)(a + 0.5);
}

int main(void)
{
	double x;
	int result;
	printf("실수를 입력하시오. ");
	scanf("%lf", &x);
	result = round(x);
	printf("반올림 한 값은 %d 입니다.", result);

}
