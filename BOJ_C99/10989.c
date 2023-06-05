#include "stdio.h"

int main() {
    int nlist[10002] = {0,}, N;
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        int j;
        scanf("%d", &j);
        nlist[j]++;
    }
    for (int i = 0; i < 10002; ++i) {
        for (int j = 0; j < nlist[i]; ++j) {
            printf("%d\n", i);
        }
    }
}