#include "stdio.h"

int main() {
    int N, M, i, j, result = 0;
    scanf("%d %d\n", &N, &M);
    char input[N][M], right[N][M], con;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%c", &input[i][j]);
        }
        scanf("%c", &con);
    }
    if (input[0][0] == 'W') {
        con = 'W';
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (j % 2 == 0) {
                    right[i][j] = con;
                } else {
                    if (con == 'W') right[i][j] = 'B';
                    else right[i][j] = 'W';
                }
            }
            if (con == 'W') con = 'B';
            else con = 'W';
        }
    } else {
        con = 'B';
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                if (j % 2 == 0) {
                    right[i][j] = con;
                } else {
                    if (con == 'B') right[i][j] = 'W';
                    else right[i][j] = 'B';
                }
            }
            if (con == 'B') con = 'W';
            else con = 'B';
        }
    }
    printf("\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%c",input[i][j]);
        }
        printf("\n");
        for (j = 0; j < M; j++) {
            printf("%c", right[i][j]);
        }
        printf("\n");
        printf("\n");
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (input[i][j] != right[i][j]) result++;
            printf("%d\n", result);
        }
        printf("\n");
    }
    printf("%d", result);
}