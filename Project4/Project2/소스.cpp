#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double mile, m;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%lf", &mile);
	m = mile * 1.609;
	printf("%lf ������ %lf �����Դϴ�.", mile, m);
	return 0;
}