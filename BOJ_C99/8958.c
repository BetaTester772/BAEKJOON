#include "stdio.h"
#include "string.h"

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; ++i) {
        char S[80];
        scanf("%s", S);
        int n = 0, len = strlen(S), a = 1;
        for (int j = 0; j < len; ++j) {
            if (S[j] == 'O') {
                n += a;
                a++;
            } else{
                a = 1;
            }
        }
        printf("%d\n", n);
    }
}