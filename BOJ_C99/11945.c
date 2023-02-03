#include "stdio.h"

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; ++i) {
        char S[M + 1];
        scanf("%s", S);
        for (int j = M - 1; j >= 0; --j) {
            printf("%c", S[j]);
        }
        printf("\n");
    }
}