#include <stdio.h>
#pragma warning(disable : 4996)

int main()
{
	int square[10][3] = { {1,1,1}, {2,4,8}, {3,9,27}, {4,16,64},{5,25,125},{6,36,216}, {7,49,343},{8,64,512},{9,81,729},{10,100,1000} };
	int n, result;
	scanf("%d", &n);
	for (int i = 0; i < 10; i++)
	{
		if (square[i][2] == n)
		{
			result = square[i][0];
			break;
		}
	}
	printf("%d의 세제곱근은 %d", n, result);
	return 0;
}