#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)

void main()
{
	int r;
	double  area;

	while (1) {											// ���� �ݺ�
		printf("         ������ ? \n");
		scanf("%d", &r);
		if (r < 0)
			break;										// �ݺ� Ż��
		printf("���ﰢ���� ����: %lf\n", 3 * sqrt(3) * pow(r, 2) / 4);
		printf("���簢���� ����: %lf\n", 2 * r * r);
		break;
		printf("\n");
	}
	
}