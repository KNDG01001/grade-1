#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	float x, sum;
	printf("�Ǽ���? : ");
	scanf("%f", x);
	sum = 3 * x * x + 7 * x + 11;
	printf("���׽��� ���� %f�Դϴ�.", sum);
	return 0;
}