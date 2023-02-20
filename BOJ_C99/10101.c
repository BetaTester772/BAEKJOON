#include "stdio.h"

int main() {
    int A, B, C;
    scanf("%d\n%d\n%d", &A, &B, &C);
    if (A + B + C != 180)
        printf("Error");
    else if (A == 60 && A == B && B == C)
        printf("Equilateral");
    else if (A != B && A != C && B != C)
        printf("Scalene");
    else
        printf("Isosceles");
}