#include "stdio.h"
#include "string.h"

int main() {
    char a[5];
    int s;
    while (1) {
        s = 0;
        for (int i = 0; i < 5; ++i) {
            a[i] = 0;
        }
        scanf("%s", &a);
        if (strcmp(a, "0") == 0) break;
        int len = strlen(a);
        int n = len;
        if (n % 2 == 1) n = n / 2 + 1;
        else n /= 2;
        for (int i = 0; i < n; ++i) {
            if (a[i] != a[len - 1 - i]) {
                printf("no\n");
                s = 1;
                break;
            }
        }
        if (s == 0)
            printf("yes\n");
    }
}