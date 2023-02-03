#include "stdio.h"

int main()
{
     long long int N;
    scanf("%lld", N);
    N %= 20000303;
    printf("%lld", N);
}