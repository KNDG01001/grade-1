#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

double square(int x)
{
	return (x * x);
}

int main(void) 
{
	double a, result;
	printf("정수를 입력하시오.");
	scanf("%lf", &a);
	result = square(a);
	printf("주어진 정수 %lf의 제곱은 %lf입니다.", a, result);
	
}
