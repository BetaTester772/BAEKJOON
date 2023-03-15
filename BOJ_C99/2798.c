#include "stdio.h"

int main() {
    int N, M, Max = 0;

    scanf("%d %d", &N, &M);
    int nlist[N];

    for (int i = 0; i < N; ++i) {
        scanf("%d ", &nlist[i]);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int n = nlist[i] + nlist[j] + nlist[k];
                if (M >= n && n > Max)
                    Max = n;
            }
        }
    }
    printf("%d", Max);
}