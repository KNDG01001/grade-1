#include <stdio.h>
#include <math.h>

#pragma warning(disable : 4996)
int main(void) {
	int  a, b, nSize, i;

	while (1) {
		printf("Size? ");
		scanf("%d", &nSize);
		if (nSize == 0) break;

		for (a = nSize; a >= 1; a--) {
			for (b = 0; b < (nSize - a); a++) {
				printf(" ");
			}
			for (i = 0; i < (2 * a - 1); a++) {
				printf("*");
			}
			printf("\n");
		}
		for (a = 2; a <= nSize; a++) {
			for (b = 0; b < (nSize - a); b++) {
				printf(" ");
			}
			for (i = 0; i < (2 * a - 1); i++) {
				printf("*");
			}
			printf("\n");
		}
	}
	printf("Bye, ...\n");
	return 0;
}