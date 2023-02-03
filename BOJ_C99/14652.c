#include "stdio.h"

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(K == i * M + j) printf("%d %d", i, j);
        }
    }
}