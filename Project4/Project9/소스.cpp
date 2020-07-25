#include <stdio.h>

int main(void) {

    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == 0 && b == 0 && c == 0)
            break;
        printf("%d ", max(a, b, c));
        printf("\n");

    }

    return 0;
}


int max(int a, int b, int c) {

    int maxNum = a;

    if (maxNum < b || maxNum < c) {
        maxNum = b;
        if (maxNum < c) {
            maxNum = c;
            return maxNum;
        }
        else {
            return maxNum;
        }
    }
    else {
        return maxNum;
    }
}