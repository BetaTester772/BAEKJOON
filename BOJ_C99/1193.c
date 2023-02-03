#include "stdio.h"

int num(int n) {
    int a = 0;
    for (int i = 0; n > i; ++i, a++) {
        n -= i;
//        printf("%d %d\n", n, a);
    }
    return a;
}

int main() {
    int X, a, n = 1;
    scanf("%d", &X);

    a = num(X);
    for (int i = 1; i < a; ++i) {
        n += i;
//        printf("n: %d\n", n);
    }
//    printf("X: %d a: %d, n: %d\n", X, a, n);
    n = X - n;
//    printf("N: %d\n", n);
    if (a % 2 == 1)
        printf("%d/%d", a - n, n + 1);
    else
        printf("%d/%d", n + 1, a - n);

}