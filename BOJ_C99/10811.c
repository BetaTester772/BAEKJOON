#include "stdio.h"
#include "stdlib.h"

int reverse(int N, int list[], int i, int j) {
    int temp[N];
    for (int k = i - 1; k < j; ++k) {
        temp[k] = list[k];
    }
    for (int k = j - 1; k > i - 2; --k) {
        list[j - k - 2 + i] = temp[k];
    }
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int *list;
    list = calloc(N, sizeof(int));
    for (int i = 0; i < N; ++i) {
        list[i] = i + 1;
    }
    int i, j;
    for (int k = 0; k < M; ++k) {
        scanf("%d %d", &i, &j);
        reverse(N, list, i, j);
    }
    for (int k = 0; k < N; ++k) {
        printf("%d ", list[k]);
    }
}