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
	printf("������ �Է��Ͻÿ�.");
	scanf("%lf", &a);
	result = square(a);
	printf("�־��� ���� %lf�� ������ %lf�Դϴ�.", a, result);
	
}
