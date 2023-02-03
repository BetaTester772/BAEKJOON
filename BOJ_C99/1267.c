#include "stdio.h"

int main() {
    int N, Y = 0, M = 0, n;
    scanf("%d", &N);
    for (int i = 1; i < N; ++i) {
        n = 0;
        scanf("%d ", &n);
        Y += n / 30 + 1;
        M += n / 60 + 1;
    }
    scanf("%d", &n);
    Y += n / 30 + 1;
    M += n / 60 + 1;
    M *= 15;
    Y *= 10;
    if (M < Y)
        printf("M %d", M);
    else if (M == Y) printf("Y M %d", Y);
    else
        printf("Y %d", Y);
}