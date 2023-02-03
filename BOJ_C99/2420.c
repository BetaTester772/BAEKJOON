#include "stdio.h"

int main() {
    long a, b, num;
    scanf("%ld %ld", &a, &b);
    num = a - b;
    if (num < 0)
        num *= -1;

    printf("%ld", num);
}