#include "stdio.h"

int main() {
    int N, F;
    scanf("%d", &N);
    scanf("%d", &F);
    int n = (N / 100) * 100;
    for (int i = 0;; ++i) {
        int a = n + i;
        if (a % F == 0) {
            if (i < 10)
                printf("0%d", i);
            else if (i >= 100)
                printf("00");
            else
                printf("%d", i);
            return 0;
        }
    }
}