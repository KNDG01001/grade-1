#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	double d, e, f;


	scanf("%d %d %d", &a, &b, &c); // �� ���� �Է�
	d = (a + b + c) / 3; // ���
	e = (a - d) * (a - d) + (b - d) * (b - d) + (c - d) * (c - d); // �л�
	e /= 2;
	f = sqrt(e); // ǥ������
	printf("��� %lf �л� %lf ǥ������ %lf", d, e, f); // ���
	return 0;
}