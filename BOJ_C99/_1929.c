#include "stdio.h"

int main() {
    int M, N, nlist[1000000] = {2, 3, 5, 7}, P = 4;
    scanf("%d %d", &M, &N);
    for (int i = 2; i < N + 1; ++i) {
        int a = 0;
        for (int j = 0; nlist[j] > 0; ++j) {
            if (i % nlist[j] == 0) {
                a = 0;
                break;
            } else
                a = 1;
        }
        printf("i: %d, a: %d", i, a);
        if (a) {
            nlist[P] = i;
            P++;
        }
    }
    for (int i = 0; nlist[i] > 0; i++)
        if (nlist[i] > M)
            printf("%d\n", nlist[i]);
}