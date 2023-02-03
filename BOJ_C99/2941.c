#include "stdio.h"
#include "string.h"

int main() {
    char s[101] = {0,};
    scanf("%s", s);
    int a = 0;
    for (int i = 0; i < strlen(s) - 1; ++i) {
        if (s[i] == 'c' && s[i + 1] == '=' || s[i] == 'c' && s[i + 1] == '-' ||
            s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=' || s[i] == 'd' && s[i + 1] == '-' ||
            s[i] == 'l' && s[i + 1] == 'j' || s[i] == 'n' && s[i + 1] == 'j' || s[i] == 's' && s[i + 1] == '=' ||
            s[i] == 'z' && s[i + 1] == '=')
            a++;
    }
    printf("%d", (int) strlen(s) - a);
}