#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)

int is_multiple(int n, int m)
{
	return n % m;
}

int main(void)
{
	int a, b, result;
	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf("%d", &b);
	result = is_multiple(a, b);
	if (result == 0)
		printf("%d�� %d�� ����Դϴ�.", a, b);
	else
		printf("��¶�� �ƴ�");
}