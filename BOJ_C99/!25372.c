#include "stdio.h"
#include "string.h"

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        char arr[1000] = {0,};
        scanf("%s", arr);
        if (6 <= strlen(arr) && strlen(arr) <= 9)
            printf("yes\n");
        else
            printf("no\n");
    }
}