#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void array_insert(int* a, int size);
void array_copy(int* a, int* b, int size);
void array_print(int* a, int size);

int main() {
    int a[SIZE];
    int b[SIZE];
    srand((unsigned)time(NULL));

    array_insert(a, SIZE);
    array_insert(b, SIZE);

    array_print(a, SIZE);
    array_print(b, SIZE);

    array_copy(a, b, SIZE);

    array_print(a, SIZE);
    array_print(b, SIZE);

    return 0;
}

void array_insert(int* a, int size) {
    int i;
    static int j = 0;
    if (j == 0) {
        for (i = 0; i < SIZE; i++)
            a[i] = rand() % 100 + 1;
        j = 1;
    }
    for (i = 0; i < SIZE; i++)
        a[i] = rand() / 100 + 1;
}
void array_copy(int* a, int* b, int size) {
    int i;

    for (i = 0; i < SIZE; i++)
        b[i] = a[i];
}
void array_print(int* a, int size) {
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%d ", a[i]);
    printf("\n");
}