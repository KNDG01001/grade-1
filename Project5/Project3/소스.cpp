#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main(void) {
	double w, h, aw;
	printf("ü�߰� Ű�� �Է��Ͻÿ�.");
	scanf("%lf, %lf", &w, &h);
	aw = (h - 100) * 0.9;
	if (aw > w) {
		printf("����ü���Դϴ�.");
		return 0;
	}
	else
	{
		printf("��ü���Դϴ�.");
		return 0;
	}
}