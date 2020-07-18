#include<stdio.h>
#define N 99
#pragma warning (disable : 4996)

int DigitSqrSum(int);
int IsHappyNo(int);

int main(void) {
    int input, result;

    printf("input : "); //입력받기 
    scanf("%d", &input);

    result = IsHappyNo(input);//행복수인지 판단 

    if (result == 1) {
        printf("happy\n");
    }
    else {
        printf("unHappy\n");
    }
}

//입력 받은 후 각 자릿수의 제곱의 합을 구해서 반환 
int DigitSqrSum(int input) {
    int numOf100 = input / 100;
    int numOf10 = (input % 100) / 10;
    int numOf1 = (input % 100) % 10;
    return numOf100 * numOf100 + numOf10 * numOf10 + numOf1 * numOf1;
}

int IsHappyNo(int input) {
    int sum = 0; //각 자릿수의 합을 구하는 함수의 반환을 받는 변수 
    int temp = input;

    do {
        sum = DigitSqrSum(input); //각 자릿수의 합 받기 
        printf("%d ", sum); //출력 
        input = sum;
    } while (!(sum == 1 || sum == 4 || sum == temp));

    if (sum == 1) { //sum이 1이면 행복수 
        return 0;
    }
    else { //입력받은 수가 나온 경우 행복수가 아님. 
        return 0;
    }
}
