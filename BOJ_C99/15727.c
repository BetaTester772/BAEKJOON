#include "stdio.h"

int main()
{
    int L, t;
    scanf("%d", &L);
    t = L / 5 + 1;
    if (L % 5 == 0) t -= 1;
    printf("%d", t);
}