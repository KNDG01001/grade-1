#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)
#define pi 3.141592

int even(int n)
{
	if (n % 2 == 0)
		return printf("1");
	else
		return printf("0");
}

int absolute(int n)
{
	return (int)(n + 0.5);
}

int sign(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (1);
	else
		return (0);
	
}

int main(void)
{
	int x, result1, result2, result3;
	printf("������ �Է��Ͻÿ�. ");
	scanf("%d", &x);
	result1 = even(x);
	result2 = absolute(x);
	result3 = sign(x);
	printf("even()�� ��� : %d'\n", result1);
	printf("absolute()�� ��� : %d\n", result2);
	printf("sign()�� ��� : %d\n", result3);
}