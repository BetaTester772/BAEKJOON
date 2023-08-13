#include "stdio.h"

long long Gcd(long long a, long long b) {
    if (b == 0) return a;
    return Gcd(b, a % b);
}

long long Eulers_phi(long long n) {
    long long result = n;
    for (long long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0) {
                n /= i;
            }
            result -= result / i;
        }
    }
    if (n > 1) result -= result / n;
    return result;
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("%lld", Eulers_phi(n));
}