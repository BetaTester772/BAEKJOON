#include "stdio.h"
#include "string.h"

int main() {
    char S[501];
    scanf("%[^\n]", S);
    while (strcmp(S, "END") != 0) {
        int len = strlen(S);
        for (int i = len-1; i >= 0; --i) {
            printf("%c", S[i]);
        }
        printf("\n");
        scanf("\n%[^\n]", S);
    }
}