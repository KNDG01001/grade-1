#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			sum = sum + i;
	}
	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);
	return 0;
}