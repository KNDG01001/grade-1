#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	int a, b, s, w;
	printf("2���� ������ �Է��Ͻÿ�. :");
	scanf("%d %d", &a, &b);
	s = a / b;
	w = a % b;
	printf("�� = %d, ������ = %d", s, w);
	return 0;

}