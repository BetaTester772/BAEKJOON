#include "stdio.h"
#include "string.h"

long long int value(char color[7]) {
    if (!strcmp(color, "black"))
        return 0;
    else if (!strcmp(color, "brown"))
        return 1;
    else if (!strcmp(color, "red"))
        return 2;
    else if (!strcmp(color, "orange"))
        return 3;
    else if (!strcmp(color, "yellow"))
        return 4;
    else if (!strcmp(color, "green"))
        return 5;
    else if (!strcmp(color, "blue"))
        return 6;
    else if (!strcmp(color, "violet"))
        return 7;
    else if (!strcmp(color, "grey"))
        return 8;
    else if (!strcmp(color, "white"))
        return 9;
}

long long int multiple(char color[7]) {
    if (!strcmp(color, "black"))
        return 1;
    else if (!strcmp(color, "brown"))
        return 10;
    else if (!strcmp(color, "red"))
        return 100;
    else if (!strcmp(color, "orange"))
        return 1000;
    else if (!strcmp(color, "yellow"))
        return 10000;
    else if (!strcmp(color, "green"))
        return 100000;
    else if (!strcmp(color, "blue"))
        return 1000000;
    else if (!strcmp(color, "violet"))
        return 10000000;
    else if (!strcmp(color, "grey"))
        return 100000000;
    else if (!strcmp(color, "white"))
        return 1000000000;
}

int main() {
    long long resist = 0;
    char color[7];
    scanf("%s", color);
    resist += value(color) * 10;
    scanf("%s", color);
    resist += value(color);
    scanf("%s", color);
    resist *= multiple(color);

    printf("%lld", resist);
}