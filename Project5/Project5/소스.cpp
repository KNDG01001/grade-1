#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int  main(void)
{
	int a, b;
	printf("정수를 입력하시오. : ");
	scanf("%d", &a);
	printf("정수를 입력하시오 : ");
	scanf("%d", &b);

	switch (a % b) {
	case 0 : 
		printf("약수입니다.");
		break;
	default :
		printf("약수가 아닙니다.");
		break;
	}
}