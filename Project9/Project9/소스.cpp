#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

double get_tax(int x)
{
	if (x <= 1000)
		return x * 0.08;
	if (x > 1000)
		return x * 0.1;
}

int main(void)
{
	double a, result;
	printf("�ҵ��� �Է��Ͻÿ�(����) : ");
	scanf("%lf", &a);
	result = get_tax(a);
	printf("�ҵ漼�� %lf�Դϴ�.", result);
}