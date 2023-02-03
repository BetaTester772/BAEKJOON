#include "stdio.h"

long long pow31(int i) {
    long long n = 1;
    for (int j = 0; j < i; ++j) {
        n *= 31;
    }
    return n;
}

int main() {
    char s[51];
    int L;
    long long hash = 0;
    scanf("%d", &L);
    scanf("%s", s);
    for (int i = 0; i < L; ++i) {
        int a = s[i] - 'a' + 1;
        a *= pow31(i) % 1234567891;
        hash += a;
    }
    printf("%lld", hash % 1234567891);
}