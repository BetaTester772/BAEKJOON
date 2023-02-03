#include "stdio.h"
#include "string.h"

int main() {
    int N, len;
    scanf("%d", &N);
    char arr[50];
    scanf("%s", arr);
    len = strlen(arr);
    for (int i = 1; i < N; ++i) {
        char s[50] = {0,};
        scanf("%s", s);
        for (int j = 0; j < len; ++j) {
            if (s[j] != arr[j]) arr[j] = '?';
        }
    }
    printf("%s", arr);
}