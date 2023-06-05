#include "stdio.h"
#include "string.h"

int main() {
    char slist[5][15];
    char S[16];
    for (int i = 0; i < 5; ++i) {
        scanf("%s", S);
        for (int j = 0; j < strlen(S); ++j)
            for (int k = 0; j < strlen(slist[j]); ++j)
                S[j][k] = S[j];
    }
}