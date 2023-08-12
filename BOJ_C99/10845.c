#include "stdio.h"
#include "string.h"

int start = 0, pointer = 0, queue[10001] = {0,};

int main() {
    int N;
    char command[6];
    int x = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", command);
//        printf("command: %s, x: %d\n", command, x);
        if (strcmp("push", command) == 0) {
            scanf("%d", &x);
            queue[pointer] = x;
            pointer++;
        } else if (strcmp("pop", command) == 0) {
            if (pointer - start != 0) {
                printf("%d\n", queue[start]);
                queue[start] = 0;
                start++;
            } else
                printf("-1\n");
        } else if (strcmp("size", command) == 0) {
            printf("%d\n", pointer - start);
        } else if (strcmp("empty", command) == 0) {
            if (pointer - start == 0)
                printf("1\n");
            else
                printf("0\n");
        } else if (strcmp("front", command) == 0) {
            if (pointer - start != 0)
                printf("%d\n", queue[start]);
            else
                printf("-1\n");
        } else if (strcmp("back", command) == 0) {
            if (pointer - start != 0)
                printf("%d\n", queue[pointer - 1]);
            else
                printf("-1\n");
        }

//        for (int j = 0; j < 5; ++j) {
//            printf("%d ", queue[j]);
//        }
//        printf("\n");
    }
}