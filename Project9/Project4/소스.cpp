#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int is_multiple(int n, int m)
{
	return n % m;
}

int main(void)
{
	int a, b, result;
	printf("첫번째 정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("두번째 정수를 입력하시오 : ");
	scanf("%d", &b);
	result = is_multiple(a, b);
	if (result == 0)
		printf("%d는 %d의 배수입니다.", a, b);
	else
		printf("어쨋든 아님");
}