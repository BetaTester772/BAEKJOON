#include "stdio.h"

int main() {
    int x, y, w, h, a;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    a = x;
    if (y < a) a = y;
    if (w - x < a) a = w - x;
    if (h - y < a) a = h - y;
    printf("%d", a);
}