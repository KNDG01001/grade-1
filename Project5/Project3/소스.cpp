#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void) {
	double w, h, aw;
	printf("체중과 키를 입력하시오.");
	scanf("%lf, %lf", &w, &h);
	aw = (h - 100) * 0.9;
	if (aw > w) {
		printf("정상체중입니다.");
		return 0;
	}
	else
	{
		printf("과체중입니다.");
		return 0;
	}
}