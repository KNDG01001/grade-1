#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void)
{
	double wm, we;
	printf("������ : ");
	scanf("%lf", &we);
	wm = we * 0.17;
	printf("�޿����� �����Դ� %lf�Դϴ�", wm);
	return 0;
}