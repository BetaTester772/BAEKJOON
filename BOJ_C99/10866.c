#include "stdio.h"
#include "string.h"


int start = 10000, end = 9999, queue[30000] = {0,};

int main() {
    char command[11];
    int N, x;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", command);
        if (strcmp("push_front", command) == 0) {
            scanf("%d", &x);
            start--;
            queue[start] = x;
        } else if (strcmp("push_back", command) == 0) {
            scanf("%d", &x);
            end++;
            queue[end] = x;
        } else if (strcmp("pop_front", command) == 0) {
            if (end - start + 1 != 0) {
                printf("%d\n", queue[start]);
                start++;
            } else {
                printf("-1\n");
            }
        } else if (strcmp("pop_back", command) == 0) {
            if (end - start + 1 != 0) {
                printf("%d\n", queue[end]);
                end--;
            } else {
                printf("-1\n");
            }
        } else if (strcmp("size", command) == 0) {
            printf("%d\n", end - start + 1);
        } else if (strcmp("empty", command) == 0) {
            if (end - start + 1 == 0) {
                printf("1\n");
            } else {
                printf("0\n");
            }
        } else if (strcmp("front", command) == 0) {
            if (end - start + 1 != 0) {
                printf("%d\n", queue[start]);
            } else {
                printf("-1\n");
            }
        } else if (strcmp("back", command) == 0) {
            if (end - start + 1 != 0) {
                printf("%d\n", queue[end]);
            } else {
                printf("-1\n");
            }
        }
//        printf("start: %d, end: %d\nqueue: ", start, end);
//        for (int j = 9998; j <= 10002; ++j) {
//            printf("%d ", queue[j]);
//        }
//        printf("\n");
    }
}
