#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int  main(void)
{
	int a, b, c, min;
	printf("�������� �Է��Ͻÿ�. : ");
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
	printf("�ּҰ� = %d", min);
	return 0;
}