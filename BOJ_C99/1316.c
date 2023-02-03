#include "stdio.h"
#include "string.h"

int check() {
    char s[101] = {0,}, temp, alr[26] = {0,};
    scanf("%s", s);
    temp = s[0];
    for (int j = 1; j < strlen(s); ++j) {
        if (s[j] != temp) {
            for (int k = 0; k < strlen(alr); ++k) {
                if (s[j] == alr[k]) {
                    return 0;
                }
            }
            alr[strlen(alr)] = temp;
            temp = s[j];
        }
    }
    return 1;
}

int main() {
    int N, a = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        a += check();
    }
    printf("%d", a);
}