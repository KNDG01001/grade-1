#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)



void com_rand(int* com);                                              //문제 출제
void user_input(int* user, int count);                                //사용자 입력 받는 함수
void check(int* com, int* user, int* sc, int* ball);              // 스트라익, 볼, 정답을 체크하는 함수

int main(void) {
    int com[3], user[3], count = 0, sc = 0, ball = 0;
    com_rand(com);
    printf("==야구 게임==\n");
    while (count != 20) {                              //20번 기회가 끝나면 게임 종료
        user_input(user, count);
        if (user[0] == user[1] || user[0] == user[2] || user[1] == user[2]) {      //입력값중 중복되면 다시
            printf("중복되었습니다. 다시!!\n");
            continue;
        }
        sc = 0, ball = 0;                    //0으로 초기화를 안하면 스트라익, 볼이 계속 올라감.
        check(com, user, &sc, &ball);          //맞는지 체크하는 함수
        count++;
        if (sc == 3) {                         //3스트라익이면 정답이기 때문에 정답처리 한후 게임 종료
            printf("정답!!\n");
            printf("정답은 %d %d %d 입니다.\n", com[0], com[1], com[2]);
            printf("%d번만에 성공했습니다.\n", count);
            exit(1);
        }
        printf("%d 스트라익 %d 볼\n", sc, ball);
    }
    printf("기회 끝\n");
}

void com_rand(int* com) {
    int i;
    srand((unsigned)time(NULL)); rand(); rand(); rand();
    for (i = 0; i < 3; i++) *(com + i) = rand() % 9 + 1;           //먼저 각각 숫자를 랜덤하게 설정
    while (*(com) == *(com + 1) || *(com) == *(com + 2) || *(com + 1) == *(com + 2))      //중복되면 다시
        for (i = 0; i < 3; i++) *(com + i) = rand() % 9 + 1;
}

void user_input(int* user, int count) {
    printf("%d번째 기회 : ", count + 1);
    scanf("%1d%1d%1d", user, user + 1, user + 2);         //한자리만 입력받기 위해 %1d사용
}

void check(int* com, int* user, int* sc, int* ball) {     //체크하고 스트라익과 볼을 설정
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (*(com + i) == *(user + j)) {
                if (i == j) (*sc)++;
                else (*ball)++;
            }
        }
    }
}