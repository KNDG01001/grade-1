#include <stdio.h>

#define SIZE 5
int array_equal(int* x, int* y, int size);

int main() {
    int x[SIZE] = { 0 };
    int y[SIZE] = { 0 };

    printf("%d \n", array_equal(x, y, SIZE));

    return 0;
}

int array_equal(int* x, int* y, int size) {
    int i, result;

    for (i = 0; i < SIZE; i++) {
        if (x[i] == y[i])    
            result = 1;
        else                
            result = 0;
    }
    return result;
}