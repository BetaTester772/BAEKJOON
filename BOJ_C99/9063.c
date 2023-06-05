#include "stdio.h"

int main() {
    int N, x1 = -100001, x2 = 100001, y1 = -100001, y2 = 100001;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x > x1) // 최대
            x1 = x;
        if (x < x2) // 최소
            x2 = x;
        if (y > y1)
            y1 = y;
        if (y < y2)
            y2 = y;
    }
    printf("%d", (x1 - x2) * (y1 - y2));
}