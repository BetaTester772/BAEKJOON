#include <stdio.h>

int main() {
    int C, N, arr[1000];
    float n, count;
    scanf("%d", &C);
    for (int j = 0; j < C; j++) {
        n = 0;
        count = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            scanf(" %d", &arr[i]);
        }
        for (int i = 0; i < N; i++) {
            n = n + arr[i];
        }
        n = n / N;
        for (int i = 0; i < N; i++) {
            if (arr[i] > n) count++;
        }
        printf("%.3f", count / N * 100);
        printf("%%\n");
    }
}