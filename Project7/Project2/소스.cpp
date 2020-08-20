#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, a;
	printf("정수를 입력하시오.");
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
			printf("%d\n", a / i);
	}
}