#include <stdio.h>
#pragma warning(disable : 4996)

int main(void)
{
	int days[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	printf("8���� %d�� ���� �ֽ��ϴ�.\n",days[7]);
	printf("9���� %d�� ���� �ֽ��ϴ�.\n", days[8]);
	printf("10���� %d�� ���� �ֽ��ϴ�.\n", days[9]);
	printf("11���� %d�� ���� �ֽ��ϴ�.\n", days[10]);
	printf("12���� %d�� ���� �ֽ��ϴ�.\n", days[11]);
	return 0;
}