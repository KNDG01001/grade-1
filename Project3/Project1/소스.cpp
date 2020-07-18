#include <stdio.h>
#include <math.h>

#pragma warning(disable: 4996)

void main()
{
	int r;
	double  area;

	while (1) {											// 무한 반복
		printf("         반지름 ? \n");
		scanf("%d", &r);
		if (r < 0)
			break;										// 반복 탈출
		printf("정삼각형의 면적: %lf\n", 3 * sqrt(3) * pow(r, 2) / 4);
		printf("정사각형의 면적: %lf\n", 2 * r * r);
		break;
		printf("\n");
	}
	
}