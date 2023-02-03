#include "stdio.h"

int main() {
    int A, B, C, D, a, b, c, temp;
    scanf("%d %d %d", &A, &B, &C);
    scanf("%d", &D);
    a = D / 3600;
    D -= a * 3600;
    b = D / 60;
    c = D % 60;
    A += a;
    B += b;
    C += c;
    if (C >= 60) {
        B += C / 60;
        C %= 60;
    }
    if (B >= 60) {
        A += B / 60;
        B %= 60;
    }
    if (A >= 24) {
        A %= 24;
        B += c / 60;
    }
    printf("%d %d %d", A, B, C);
}