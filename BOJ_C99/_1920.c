#include "stdio.h"

int main() {
    int N, A[100000], M, B[100000];
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &M);
    for (int i = 0; i < M; ++i) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < M; ++i) {
        int n = 0;
        for (int j = 0; j < N; ++j) {
            if (A[j] == B[i]) {
                n++;
                break;
            }
        }
        if (n > 0) printf("1\n");
        else printf("0\n");
    }
}