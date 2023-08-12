#include "stdio.h"

int main() {
    int N;
    long long num = 1;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        num *= i + 1;
    }
    printf("%lld", num / 604800);
//    10080
}