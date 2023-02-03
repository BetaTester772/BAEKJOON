#include "stdio.h"
#include "string.h"

int main() {
    char s[16] = {0,};
    int sum = 0;
    scanf("%s", s);
    for (int i = 0; i < strlen(s); ++i) {
        if ('A' <= s[i] && s[i] <= 'C') sum += 3;
        else if ('D' <= s[i] && s[i] <= 'F') sum += 4;
        else if ('G' <= s[i] && s[i] <= 'I') sum += 5;
        else if ('J' <= s[i] && s[i] <= 'L') sum += 6;
        else if ('M' <= s[i] && s[i] <= 'O') sum += 7;
        else if ('P' <= s[i] && s[i] <= 'S') sum += 8;
        else if ('T' <= s[i] && s[i] <= 'V') sum += 9;
        else if ('W' <= s[i] && s[i] <= 'Z') sum += 10;
    }
    printf("%d", sum);
}