#include "stdio.h"
#include "stdlib.h"

int main() {
    int N, M, i, j, k, t = 0;
    scanf("%d %d\n", &N, &M);
    int a = (N * (N - 1) * (N - 2)) / (3 * 2);
    int card[N], sum[a];
    for (i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }

    if (N == 1) {
        printf("%d", card[0]);
    } else if (N == 2) {
        printf("%d", card[0] + card[1]);
    } else {
        for (i = 0; i < N - 2; i++) {
            for (j = 1; j < N - 1; j++) {
                for (k = 2; k < N; k++) {
                    if (i >= j || j >= k || j == i) continue;
                    sum[t] = card[i] + card[j] + card[k];
//                    printf("i: %d, j: %d, k: %d, t: %d, sum = %d\n", i, j, k, t, sum[t]);
                    t++;
                }
            }
        }
        int m = 0, n = 0;
        for (int l = 0; l < a; ++l) {
            if (abs(M - sum[l]) < abs(M - m)) m = sum[l];
        }
        printf("%d", m);
    }
    scanf("%d", &i);
}