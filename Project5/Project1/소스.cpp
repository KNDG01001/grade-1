#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int  main(void)
{
	int a, b, c, min;
	printf("세정수를 입력하시오. : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		if (a < c) min = a;
		else min = c;
	}
	else {
		if (b < c) min = b;
		else min = c;
	}
	printf("최소값 = %d", min);
	return 0;
}