#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double d, e, f;


	scanf("%d %d %d", &a, &b, &c); // 세 정수 입력
	d = (a + b + c) / 3; // 평균
	e = (a - d) * (a - d) + (b - d) * (b - d) + (c - d) * (c - d); // 분산
	e /= 2;
	f = sqrt(e); // 표준편차
	printf("평균 %lf 분산 %lf 표준편차 %lf", d, e, f); // 출력
	return 0;
}