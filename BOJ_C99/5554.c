#include "stdio.h"

int main() {
    int second = 0;
    for (int i = 0; i <4; ++i) {
        int a;
        scanf("%d", &a);
        second += a;
    }
    printf("%d\n%d", second / 60, second % 60);
}