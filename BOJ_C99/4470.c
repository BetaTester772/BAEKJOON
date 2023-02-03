#include "stdio.h"

int main() {
    int N;

    scanf("%d%*c", &N);
    for (int i = 0; i < N; ++i) {
        char S[51] = {0,};
        scanf("%[^\n]%*c", S);
        printf("%d. %s\n", i + 1, S);
    }
}