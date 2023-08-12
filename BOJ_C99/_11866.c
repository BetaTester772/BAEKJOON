#include "stdio.h"

int queue[100000] = {};

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 1; i <= K; ++i) {
        for (int j = 1; j <= N; ++j) {
//            printf("%d %d\n", j, (j - 1) + (i - 1) * N);
            queue[(j - 1) + (i - 1) * N] = j;
        }
    }

    for (int i = 1; i <= N; ++i) {
//        printf("%d\n", i * K - 1);
        printf("%d\n", queue[i * K -2 + i]);
    }
}