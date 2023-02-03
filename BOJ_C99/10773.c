#include "stdio.h"

int main() {
    int i = 0, p = 0, arr[100000] = {0,}, K;

    scanf("%d", &K);

    while (i < K) {
        int a;
        scanf("%d", &a);
        if (a == 0) {
            p--;
            arr[p] = 0;
        } else {
            arr[p] = a;
            p++;
        }
        i++;
    }
    int sum = 0;
    for (int k = 0; k < K; ++k) {
        sum += arr[k];
    }
    printf("%d", sum);
}