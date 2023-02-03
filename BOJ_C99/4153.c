#include "stdio.h"
#include "math.h"

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while (a + b + c != 0) {
        if (c > a && c > b) {
            if (pow(a, 2) + pow(b, 2) == pow(c, 2))
                printf("right\n");
            else
                printf("wrong\n");
        } else if (a > b && a > c) {
            if (pow(c, 2) + pow(b, 2) == pow(a, 2))
                printf("right\n");
            else
                printf("wrong\n");
        } else if (b > a && b > c) {
            if (pow(c, 2) + pow(a, 2) == pow(b, 2))
                printf("right\n");
            else
                printf("wrong\n");
        }
        scanf("%d %d %d", &a, &b, &c);
    }

}