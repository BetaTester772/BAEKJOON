#include "stdio.h"

int main()
{
    long int A = 0, n;
    for (int i = 0; i < 5; ++i) {
        scanf("%d", &n);
        A += n;
    }
    printf("%ld", A);
}