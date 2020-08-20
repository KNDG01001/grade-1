#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, a;
	printf("카운터의 초기값을 입력하시오.");
	scanf("%d", &a);
	for (i = a; i >= 0; i--)
	{
		if (i == 0)
			break;
		printf("%d ",i);
	}
	
}
