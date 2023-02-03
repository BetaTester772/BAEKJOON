#include "stdio.h"

int main() {
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int n = a / b;
    printf("%lld\n%lld", n, a % b);
}