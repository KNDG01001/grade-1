#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)

int main(void)
{
	int nA, nB, nC;			// 2�� �������� ���
	int nDet;
	while (1) {					// ���� ����
		printf("a? ");
		scanf("%d", &nA);
		if (nA == 0)			// nA�� 0�� �Է��ϸ�
			break;				// ������.
		printf("b? ");
		scanf("%d", &nB);
		printf("c? ");
		scanf("%d", &nC);
		printf("���������� %dx^2+%dx+%d=0\n", nA, nB, nC);
		int dDet = nB * nB - (4 * nA * nC);
		printf("dDet = %d\n", dDet);
		if (dDet < 0)						// �Ǻ����� ����
			printf("�Ǳ� ����");
		else if (dDet == 0)				// �Ǻ����� 0
			printf("�߱�: %f \n", (-nB) / (2.0 * nA));
		else {								// �Ǻ����� ���
			double fRoot1 = (-nB + (sqrt(nB * nB - 4 * nA * nC))) / (2 * nA);
			double fRoot2 = (nB + (sqrt(nB * nB - 4 * nA * nC))) / (2 * nA);
			printf("%lf, %lf", fRoot1, fRoot2);
		}
		printf("\n\n");
	}
	
}