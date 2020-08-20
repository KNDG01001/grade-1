#include <stdio.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
    int i = 0, j = 0, k = 0;

    for (i = 0; i < 5; i++)
    {
        for (k = 1; k < 5 - i; k++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
            printf("*");
        printf("\n");
    }
}