#include "stdio.h"

int main() {
    int T, S, n;
    scanf("%d %d", &T, &S);

    if (T >= 12 && T <= 16 && S == 0)
        n = 320;
    else
        n = 280;

    printf("%d", n);
}