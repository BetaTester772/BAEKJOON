#include "stdio.h"

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N - 1; ++i) {
        for (int k = 0; k < N - i - 1; ++k) {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; ++k) {
            printf("*");
        }
        printf("\n");
    }
//    for (int i = 0; i < 2 * N - 1; ++i) {
//        printf("*");
//    }
//    printf("\n");
    for (int i = N; i > 0; --i) {
        for (int k = N - i + 1; k > 1; --k) {
            printf(" ");
        }
        for (int k = i * 2 - 1 ; k > 0; --k) {
            printf("*");
        }
        printf("\n");
    }
}