#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define PI 3.1415926535897932

int main(void)
{
    int r;
    double c;

    printf("   ������ ? ");
    scanf("%d", &r);
    c = 2 * PI * r;                           // ���ѷ� ���� 2��r ���
    printf("���� �ѷ��� %f �Դϴ�", c);                        // �Ҽ��� �Ʒ� 15�ڸ����� ���
    while (1) {                              // ���� ����
        printf("\n     ��� ? ");
        int n = 0;
        scanf("%d", &n);                                     // ��� �Է�
        double theta = PI / n, dValue;         // ���⼭ n�� ����� �ǹ��Ѵ�.
        dValue = sin(theta);
        dValue = cos(theta);
        dValue = tan(theta);
        if (n < 3)                              // 3��� �̻��̾�� ��� ����   
            break;                              // ������ Ż��
        c = 2 * n * r * sin(theta);                        // ���� �ٰ��� �ѷ� ���
        printf("���� �ѷ��� %f �Դϴ�.", c);                     // �Ҽ��� �Ʒ� 15�ڸ����� ���
       c = 2 * n * r * tan(theta);                        // ���� �ٰ��� �ѷ� ���
        printf("�ٱ� �ѷ��� %f �Դϴ�.",c);      // �Ҽ��� �Ʒ� 15�ڸ����� ���
    }
    
}