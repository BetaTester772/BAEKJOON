#include "stdio.h"
#include "string.h"
#include "stdlib.h"
char x[50], y[50];
#define swap (type, x, y) do {type t= x; x = y; y = t;} while(0)

int main() {
    int N;
    scanf("%d", &N);
    int i, lenth[N], num = 0, a = 0;
    char word[N][50], sorted[N][50], temp[N][50];
    for (i = 0; i < N; i++) {
        scanf("%s", &word[i]);
        lenth[i] = strlen(word[i]);
    }   //입력 검증 완료
    for (i = 1; i <= N; i++) {
        num = 0;
        for (int j = 0; j < N; ++j) {
            if (lenth[j] == i) {
                num++;
                strcpy(sorted[a], word[j]);
                a++;
            }
        }
        int n = N;
        if (num > 1) {
            for (int j = 0; j < n - 1; ++j) {
                for (int k = n - 1; k > j; --k) {
                    if (sorted[k - 1][0] > sorted[k][0])
                    swap(char[N][50], sorted[k - 1], sorted[k]);
                }
            }
        }
    }
    for (i = 0; i < N; i++) {
        printf("%s\n", temp[i]);
    }
}