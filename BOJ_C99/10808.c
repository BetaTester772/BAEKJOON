#include "stdio.h"

int main() {
    char S[101] = {0,};
    int i = 0, alpha[26] = {0,};
    scanf("%s", S);

    while (S[i] != NULL) {
        alpha[S[i]-'a']++;
        i++;
    }
    for (i = 0; i < 25; ++i) {
        printf("%d ", alpha[i]);

    }
    printf("%d", alpha[25]);
}