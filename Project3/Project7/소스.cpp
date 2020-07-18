#include<stdio.h>
#define N 99
#pragma warning (disable : 4996)

int DigitSqrSum(int);
int IsHappyNo(int);

int main(void) {
    int input, result;

    printf("input : "); //�Է¹ޱ� 
    scanf("%d", &input);

    result = IsHappyNo(input);//�ູ������ �Ǵ� 

    if (result == 1) {
        printf("happy\n");
    }
    else {
        printf("unHappy\n");
    }
}

//�Է� ���� �� �� �ڸ����� ������ ���� ���ؼ� ��ȯ 
int DigitSqrSum(int input) {
    int numOf100 = input / 100;
    int numOf10 = (input % 100) / 10;
    int numOf1 = (input % 100) % 10;
    return numOf100 * numOf100 + numOf10 * numOf10 + numOf1 * numOf1;
}

int IsHappyNo(int input) {
    int sum = 0; //�� �ڸ����� ���� ���ϴ� �Լ��� ��ȯ�� �޴� ���� 
    int temp = input;

    do {
        sum = DigitSqrSum(input); //�� �ڸ����� �� �ޱ� 
        printf("%d ", sum); //��� 
        input = sum;
    } while (!(sum == 1 || sum == 4 || sum == temp));

    if (sum == 1) { //sum�� 1�̸� �ູ�� 
        return 0;
    }
    else { //�Է¹��� ���� ���� ��� �ູ���� �ƴ�. 
        return 0;
    }
}
