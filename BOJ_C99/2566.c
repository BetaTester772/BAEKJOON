#include "stdio.h"

int main() {
    int M = -1, y, x;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int n;
            scanf("%d", &n);
            if (n > M) {
                M = n;
                y = i + 1;
                x = j + 1;
            }
        }
    }
    printf("%d\n%d %d", M, y, x);
}