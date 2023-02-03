#include "stdio.h"
#include "string.h"

int main() {
    int N, p = 0;
    char S[6];
    scanf("%d", &N);
    int K[N];
    for (int i = 0; i < N; ++i) {
        scanf("%s", S);
        if (strcmp(S, "push") == 0) {
            int num;
            scanf("%d", &num);
            K[p] = num;
            p++;
        } else if (strcmp(S, "pop") == 0) {
            if (p == 0) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", K[p - 1]);
            K[p - 1] = "\0";
            p--;
        } else if (strcmp(S, "size") == 0) {
            printf("%d\n", p);
        } else if (strcmp(S, "empty") == 0) {
            if (p == 0)
                printf("1\n");
            else
                printf("0\n");
        } else if (strcmp(S, "top") == 0) {
            if (p == 0) {
                printf("-1\n");
                continue;
            }
            printf("%d\n", K[p - 1]);
        }
    }
}