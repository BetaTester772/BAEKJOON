#include <stdio.h>

int apt(int K, int N)
{
	int n, k, arr[K][N];
	for (n = 1; n <= N; n++) {
		for (k = 0; k < K; k++) {
			if (n == 1) {
				arr[k][n] = 1;
				continue;
			}
			if (k == 0) {
				arr[k][n] = n;
				continue;
			}
			arr[k][n] = arr[k - 1][n] + arr[k][n - 1];
		}
	}
	printf("%d", arr[k][n]);
	return 1;
}

int main()
{
	int T, K, N;
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d", &K);
		scanf("%d", &N);
		apt(K, N);
	}
}