#include <stdio.h>

int main() {
    int score1, score2, score3;

    // 1. 점수 입력
    printf("철수 점수 (score1): "); scanf("%d", &score1);
    printf("영희 점수 (score2): "); scanf("%d", &score2);
    printf("민수 점수 (score3): "); scanf("%d", &score3);

    // 2. 최고 점수 구하기
    int max = score1;
    if (score2 > max) max = score2;
    if (score3 > max) max = score3;

    // 3. 조건별 결과 출력
    if (score1 == score2 && score2 == score3) {
        printf("모두가 동점입니다.\n");
    } 
    else if (score1 == max && score2 == max) {
        printf("철수와 영희가 1등입니다 (%d점)\n", max);
    } 
    else if (score1 == max && score3 == max) {
        printf("철수와 민수가 1등입니다 (%d점)\n", max);
    } 
    else if (score2 == max && score3 == max) {
        printf("영희와 민수가 1등입니다 (%d점)\n", max);
    } 
    else {
        // 단독 1등 출력
        printf("1등은 ");
        if (score1 == max) printf("철수");
        else if (score2 == max) printf("영희");
        else printf("민수");
        printf(" (%d점)\n", max);
    }

    return 0;
}
