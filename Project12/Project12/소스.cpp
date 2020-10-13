#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int days[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("8월은 %d일 까지 있습니다.\n",days[7]);
	printf("9월은 %d일 까지 있습니다.\n", days[8]);
	printf("10월은 %d일 까지 있습니다.\n", days[9]);
	printf("11월은 %d일 까지 있습니다.\n", days[10]);
	printf("12월은 %d일 까지 있습니다.\n", days[11]);
	return 0;
}