#include "stdio.h"

int num(int n) {
    if (n == n % 10) return n;
    return n % 10 + num(n / 10);
}

int main() {
    int N, a, i, n;

    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        a = num(i) + i;
        if (a == N) {
            printf("%d", i);
            return 0;
        };
    }
    printf("0");
    return 0;
}