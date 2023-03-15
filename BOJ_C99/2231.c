#include "stdio.h"

int split_sum(int n) {
    if (n == n % 10) return n;
    return n % 10 + split_sum(n / 10);
}

int main() {
    int N, a, i, n;

    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        a = split_sum(i) + i;
        if (a == N) {
            printf("%d", i);
            return 0;
        };
    }
    printf("0");
    return 0;
}