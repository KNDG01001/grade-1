#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int  main(void)
{
	int a, b;
	printf("������ �Է��Ͻÿ�. : ");
	scanf("%d", &a);
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &b);

	switch (a % b) {
	case 0 : 
		printf("����Դϴ�.");
		break;
	default :
		printf("����� �ƴմϴ�.");
		break;
	}
}