#include "stdio.h"

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    char answer[n][3][6], question[m][3][5];
    for (int i = 0; i < n; ++i) {
        scanf("%s %s %s", answer[i][0], answer[i][1], answer[i][2]);
        printf("%s %s %s\n", answer[i][0], answer[i][1], answer[i][2]);
    } //입력 오류
}