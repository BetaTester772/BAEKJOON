#include "stdio.h"

long long int number_of_case(int N, int M) {
    if (N == 1) return M;
    return number_of_case(N - 1, M - 1) * M;
}

int main() {
    int i, N, M, T;
    long long int nc;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        number_of_case(N, N);
        long long int N_ = number_of_case(N, N), M_ = number_of_case(N, M);
        nc = M_ / N_;
        printf("%lld\n", nc);
    }
}
