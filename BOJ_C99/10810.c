#include "stdio.h"
#include "stdlib.h"

void insert(int a[], int i, int j, int k) {
    for (int l = i - 1; l < j; ++l) {
        a[l] = k;
    }
}

int main() {
    int N, M, *x;
    scanf("%d %d", &N, &M);
    x = calloc(N, sizeof(int));

    for (int i = 0; i < M; ++i) {
        int i, j, k;
        scanf("%d %d %d", &i, &j, &k);
        insert(x, i, j, k);
    }
    for (int i = 0; i < N; ++i) {
        printf("%d ", x[i]);
    }
}