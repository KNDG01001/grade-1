#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#define pi 3.141592

double cal_area(int r)
{
	return (r * r * pi);
}

int main(void)
{
	double a, result;
	printf("원의 반지름을 입력하시오.");
	scanf("%lf", &a);
	result = cal_area(a);
	printf("원의 면적은 %lf입니다.", result);

}
