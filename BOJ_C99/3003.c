#include <stdio.h>

int main() {
    int N, chess[6] = {1, 1, 2, 2, 2, 8};
    for (int i = 0; i < 6; ++i) {
        scanf("%d ", &N);
        printf("%d ", chess[i] - N);
    }
}