#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	int a, b, c, sum;
	float average;
	printf("�Ǽ� :");
	scanf("%d", &a);
	printf("�Ǽ� :");
	scanf("%d", &b);
	printf("�Ǽ� :");
	scanf("%d", &c);
	sum = a + b + c;
	printf("���� %d �Դϴ�\n", sum);
	average = (a + b + c) / 3;
	printf("����� %f �Դϴ�\n", average);
	return 0;
}