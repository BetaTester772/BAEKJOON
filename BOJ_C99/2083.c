#include "stdio.h"

int main() {
    char name[11];
    int age, weight;
    scanf("%s %d %d", name, &age, &weight);
    while (name[0] != '#') {
        if (age > 17 || weight >= 80)
            printf("%s Senior\n", name);
        else
            printf("%s Junior\n", name);
        scanf("%s %d %d", name, &age, &weight);
    }
}