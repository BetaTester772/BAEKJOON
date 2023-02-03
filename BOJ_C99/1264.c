#include "stdio.h"
#include "string.h"

int check(char a) {
    char s[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; ++i) {
        if (a == s[i]) return 1;
    }
    return 0;
}

int main() {
    char a[255] = {0,};
    scanf("%[^\n]", a);
    int len, sum;
    while (a[0] != '#') {
        len = strlen(a);
        sum = 0;
        for (int i = 0; i < len; ++i) {
            sum += check(a[i]);
        }
        printf("%d\n", sum);
        scanf("\n");
        scanf("%[^\n]", a);
    }
}