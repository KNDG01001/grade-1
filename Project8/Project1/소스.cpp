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
	printf("���� �������� �Է��Ͻÿ�.");
	scanf("%lf", &a);
	result = cal_area(a);
	printf("���� ������ %lf�Դϴ�.", result);

}
