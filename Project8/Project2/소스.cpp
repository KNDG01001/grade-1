#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#define pi 3.141592

double round(double a)
{
	return (int)(a + 0.5);
}

int main(void)
{
	double x;
	int result;
	printf("�Ǽ��� �Է��Ͻÿ�. ");
	scanf("%lf", &x);
	result = round(x);
	printf("�ݿø� �� ���� %d �Դϴ�.", result);

}
