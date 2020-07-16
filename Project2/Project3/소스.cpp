#include <stdio.h>
#include <math.h>
#pragma warning (disable : 4996)

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", n / m);
    printf("%d\n", n % m);
    return 0;
}