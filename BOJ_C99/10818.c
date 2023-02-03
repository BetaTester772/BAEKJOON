#include <stdio.h>

int main() {
    int M, m, num, n, i;
    scanf("%d", &num);
    scanf("%d ", &n);
    M = n;
    m = n;
    for (i = 0; i < num - 1; i++) {
        scanf("%d ", &n);
        if (n > M) M = n;
        if (n < m) m = n;
    }
    printf("%d %d", m, M);
}