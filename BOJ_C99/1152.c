#include <stdio.h>
#include "string.h"

int main() {
    char string[1000001];
    int i = 0, result = 0;
    scanf("%[^\n]", string);
    while (i < strlen(string)) {
        if (i != 0 && i != strlen(string) - 1 && string[i] == ' ') {
            result++;
        }
        i++;
    }
    if (strlen(string) == 1 && string[0] == ' ') result--;
    printf("%d", result + 1);
}