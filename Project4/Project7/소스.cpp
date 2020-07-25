#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	int a, b, s, w;
	printf("2개의 정수를 입력하시오. :");
	scanf("%d %d", &a, &b);
	s = a / b;
	w = a % b;
	printf("몫 = %d, 나머지 = %d", s, w);
	return 0;

}