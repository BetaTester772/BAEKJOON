#include "stdio.h"
#include "stdlib.h"

int main() {
    char S[100];
    scanf("%s", S);
    int len = strlen(S);
    for (int i = 0; i < len / 2 + 1; ++i) {
        if (S[len - i - 1] != S[i]) {
            printf("0");
            return 0;
        }
    }
    printf("1");
}