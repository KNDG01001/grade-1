#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double wm, we;
	printf("몸무게 : ");
	scanf("%lf", &we);
	wm = we * 0.17;
	printf("달에서의 몸무게는 %lf입니다", wm);
	return 0;
}