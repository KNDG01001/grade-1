#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double area, h, b;
	printf("�ﰢ���� �غ� : ");
	scanf("%lf", &b);
	printf("�ﰢ���� ���� : ");
	scanf("%lf", &h);
	area = 0.5 * h * b;
	printf("�ﰢ���� ���� : %lf", area);
	return 0;
}