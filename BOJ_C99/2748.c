#include "stdio.h"
#include "stdlib.h"

int F(long long a[], int n) {
    a[n] = a[n - 2] + a[n - 1];
}

int main() {
    long long *x;
    int n;
    x = calloc(91, sizeof(long long));
    x[0] = 0;
    x[1] = 1;
    scanf("%d", &n);
    for (int i = 2; i < n + 1; ++i) {
        F(x, i);

    }
    printf("%lld", x[n]);

}