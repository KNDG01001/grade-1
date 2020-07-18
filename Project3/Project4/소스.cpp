#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)

int main(void)
{
	int nA, nB, nC;			// 2차 방정식의 계수
	int nDet;
	while (1) {					// 무한 루프
		printf("a? ");
		scanf("%d", &nA);
		if (nA == 0)			// nA에 0을 입력하면
			break;				// 끝낸다.
		printf("b? ");
		scanf("%d", &nB);
		printf("c? ");
		scanf("%d", &nC);
		printf("이차방정식 %dx^2+%dx+%d=0\n", nA, nB, nC);
		int dDet = nB * nB - (4 * nA * nC);
		printf("dDet = %d\n", dDet);
		if (dDet < 0)						// 판별식이 음수
			printf("실근 없음");
		else if (dDet == 0)				// 판별식이 0
			printf("중근: %f \n", (-nB) / (2.0 * nA));
		else {								// 판별식이 양수
			double fRoot1 = (-nB + (sqrt(nB * nB - 4 * nA * nC))) / (2 * nA);
			double fRoot2 = (nB + (sqrt(nB * nB - 4 * nA * nC))) / (2 * nA);
			printf("%lf, %lf", fRoot1, fRoot2);
		}
		printf("\n\n");
	}
	
}