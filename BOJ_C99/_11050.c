#include "stdio.h"

int Pac(int n) {
    if (n == 1) return 1;
    return n * Pac(n - 1);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int C;
    C = Pac(n) / (Pac(k) * Pac(n - k));
    printf("%d", C);
}