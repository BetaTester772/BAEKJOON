#include "stdio.h"

void sort(int *arr, int size) {
    int temp;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N, K, arr[N], num = 0;
    scanf("%d %d", &N, &K);
    for (int i = 0; i < N; ++i) {
        scanf("%d", arr + i);
    }
    sort(arr, N);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i != N - j - 1 && arr[i] + arr[N - j - 1] <= K) {
//                printf("%d, %d, %d %d %d %d %d\n", i, N - j - 1, arr[0], arr[1], arr[2], arr[3], arr[4]);
                arr[i] = K + 1;
                arr[N - j - 1] = K + 1;
                num += 1;
                break;
            }
        }
    }
    printf("%d", num);
}