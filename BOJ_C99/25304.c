#include "stdio.h"

int main() {
    int total, sum = 0, N, a, b;
    scanf("%d", &total);
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d %d", &a, &b);
        sum += a * b;
    }
    if (total == sum) printf("Yes");
    else printf("No");
}