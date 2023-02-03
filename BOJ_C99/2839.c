#include "stdio.h"

int main() {
    int N, big, small, result[3] = {5000, 5000, 5000}, min = 5000;
    scanf("%d", &N);
    //3만
    if (N % 3 == 0) result[0] = N / 3;
    //5만
    if (N % 5 == 0) result[1] = N / 5;
    //둘다
    for (int i = 1; i <= N / 5; ++i) {
        big = i;
        small = (N - big * 5) / 3;
        if (big * 5 + small * 3 == N && big + small < result[2]) result[2] = big + small;
    }

    for (int i = 0; i < 3; ++i) {
        if (result[i] < min) min = result[i];
    }
    if (min != 5000) printf("%d", min);
    else printf("-1");
}