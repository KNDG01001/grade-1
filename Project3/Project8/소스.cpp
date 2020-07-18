#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable : 4996)



void com_rand(int* com);                                              //���� ����
void user_input(int* user, int count);                                //����� �Է� �޴� �Լ�
void check(int* com, int* user, int* sc, int* ball);              // ��Ʈ����, ��, ������ üũ�ϴ� �Լ�

int main(void) {
    int com[3], user[3], count = 0, sc = 0, ball = 0;
    com_rand(com);
    printf("==�߱� ����==\n");
    while (count != 20) {                              //20�� ��ȸ�� ������ ���� ����
        user_input(user, count);
        if (user[0] == user[1] || user[0] == user[2] || user[1] == user[2]) {      //�Է°��� �ߺ��Ǹ� �ٽ�
            printf("�ߺ��Ǿ����ϴ�. �ٽ�!!\n");
            continue;
        }
        sc = 0, ball = 0;                    //0���� �ʱ�ȭ�� ���ϸ� ��Ʈ����, ���� ��� �ö�.
        check(com, user, &sc, &ball);          //�´��� üũ�ϴ� �Լ�
        count++;
        if (sc == 3) {                         //3��Ʈ�����̸� �����̱� ������ ����ó�� ���� ���� ����
            printf("����!!\n");
            printf("������ %d %d %d �Դϴ�.\n", com[0], com[1], com[2]);
            printf("%d������ �����߽��ϴ�.\n", count);
            exit(1);
        }
        printf("%d ��Ʈ���� %d ��\n", sc, ball);
    }
    printf("��ȸ ��\n");
}

void com_rand(int* com) {
    int i;
    srand((unsigned)time(NULL)); rand(); rand(); rand();
    for (i = 0; i < 3; i++) *(com + i) = rand() % 9 + 1;           //���� ���� ���ڸ� �����ϰ� ����
    while (*(com) == *(com + 1) || *(com) == *(com + 2) || *(com + 1) == *(com + 2))      //�ߺ��Ǹ� �ٽ�
        for (i = 0; i < 3; i++) *(com + i) = rand() % 9 + 1;
}

void user_input(int* user, int count) {
    printf("%d��° ��ȸ : ", count + 1);
    scanf("%1d%1d%1d", user, user + 1, user + 2);         //���ڸ��� �Է¹ޱ� ���� %1d���
}

void check(int* com, int* user, int* sc, int* ball) {     //üũ�ϰ� ��Ʈ���Ͱ� ���� ����
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