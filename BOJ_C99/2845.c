#include "stdio.h"

int main() {
    int L, P, people, part[5];
    scanf("%d %d ", &L, &P);
    people = L * P;
    for (int i = 0; i < 4; ++i) {
        scanf("%d ", &part[i]);
    }
    scanf("%d", &part[4]);

    for (int i = 0; i < 4; ++i) {
        printf("%d ", part[i] - people);
    }
    printf("%d ", part[4] - people);
}