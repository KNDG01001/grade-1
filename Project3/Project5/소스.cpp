#include<stdio.h>

int main(void) {
    int sum = 0;
    int input = 0;
    int numOf100, numOf10, numOf1, temp;

    printf("input : ");
    scanf("%d", &input);
    temp = input;

    do {
        numOf100 = input / 100;
        numOf10 = (input % 100) / 10;
        numOf1 = (input % 100) % 10;
        sum = numOf100 * numOf100 + numOf10 * numOf10 + numOf1 * numOf1;
        printf("%d ", sum);
        input = sum;
    } while (!(sum == 1 || sum == temp));

    if (sum == 1) {
        printf("\n\nhappy\n");
    }
    else {
        printf("\n\nunhappy\n");
    }