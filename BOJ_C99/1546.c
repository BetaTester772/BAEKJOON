#include <stdio.h>

int main() {
    int n, i, M = 0;
    float result = 0.0;
    scanf("%d", &n);
    int grade[n];
    for (i = 0; i < n; i++) {
        scanf("%d ", &grade[i]);
        if (grade[i] > M) {
            M = grade[i];
        }
    }
    for (i = 0; i < n; i++) {
        result += (float)grade[i] / M * 100;
    }
    printf("%f", result / n);
}