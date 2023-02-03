#include "stdio.h"
#include "math.h"

int main() {
    int D;
    long double H, W, x;
    scanf("%d %Lf %Lf", &D, &H, &W);
    x = sqrtl(pow(D, 2) / (pow(H, 2) + pow(W, 2)));
    H *= x;
    W *= x;
    printf("%.0Lf %.0Lf", floorl(H), floorl(W));
}