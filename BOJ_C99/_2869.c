#include "stdio.h"

int main() {
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);

    if (V % (A - B) == 0) {
        printf("%d", (V / (A - B)) - B);
        return 0;
    } else if (V % (A - B) != 0) {
        printf("%d", (V / (A - B)) + 1);
        return 0;
    }
}