#include <stdio.h>

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m - 1; j++)
        {
            scanf("%d ", &a[i][j]);
        }
        scanf("%d\n", &a[i][j]);
    }
	for (i = 0; i < n; i++)
    {
        for (j = 0; j < m-1; j++)
        {
            scanf("%d ", &b[i][j]);
        }
        scanf("%d\n", &b[i][j]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m - 1; j++)
        {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("%d\n", a[i][j] + b[i][j]);
    }
}