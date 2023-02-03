#include <stdio.h>
#include "string.h"

int main() {
    char A[1000], B[1000];
    scanf("%s", &A);
    scanf("%s", &B);

    if (strlen(A) >= strlen(B)) printf("go");
    else printf("no");
}