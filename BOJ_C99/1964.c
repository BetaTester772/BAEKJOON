#include "stdio.h"

int main() {
    unsigned long long n, a = 5;
    scanf("%lld", &n);
    for (int i = 1; i < n; ++i) {
        a += (i + 2) * 3 - 2;
    }
    printf("%lld", a % 45678);
}