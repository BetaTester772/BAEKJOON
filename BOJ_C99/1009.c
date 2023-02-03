#include "stdio.h"

int main() {
    int T, a, b, n;
    scanf("%d", &T);
    n = 1;
    for (int i = 0; i < T; ++i) {
        scanf("%d %d", &a, &b);
        n = 1;
        for (int j = 0; j < b; ++j) {
            n *= a;
            n %= 10;
        }
        if (n == 0) n = 10;
        printf("%d\n", n);
    }
}