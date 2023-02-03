#include <stdio.h>
#include <string.h>

int T = 0;

int recursion(const char *s, int l, int r) {
    if (l >= r) printf("1");
    else if (s[l] != s[r]) printf("0");
    else {
        T++;
        recursion(s, l + 1, r - 1);
    }
}

int isPalindrome(const char *s) {
    T++;
    recursion(s, 0, strlen(s) - 1);
}

int main() {
    int N, S[1001];
    scanf("%d", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%s", S);
        isPalindrome(S);
        printf(" %d\n",T);
        T = 0;
    }
}