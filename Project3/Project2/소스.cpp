#include <stdio.h>
#include <math.h>
#pragma warning(disable: 4996)

#define PI 3.1415926535897932

int main(void)
{
    int r;
    double c;

    printf("   반지름 ? ");
    scanf("%d", &r);
    c = 2 * PI * r;                           // 원둘레 공식 2πr 사용
    printf("원의 둘레는 %f 입니다", c);                        // 소수점 아래 15자리까지 출력
    while (1) {                              // 무한 루프
        printf("\n     등분 ? ");
        int n = 0;
        scanf("%d", &n);                                     // 등분 입력
        double theta = PI / n, dValue;         // 여기서 n은 등분을 의미한다.
        dValue = sin(theta);
        dValue = cos(theta);
        dValue = tan(theta);
        if (n < 3)                              // 3등분 이상이어야 계산 가능   
            break;                              // 루프를 탈출
        c = 2 * n * r * sin(theta);                        // 내접 다각형 둘레 계산
        printf("안쪽 둘레는 %f 입니다.", c);                     // 소수점 아래 15자리까지 출력
       c = 2 * n * r * tan(theta);                        // 외접 다각형 둘레 계산
        printf("바깥 둘레는 %f 입니다.",c);      // 소수점 아래 15자리까지 출력
    }
    
}