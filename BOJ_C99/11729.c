#include <stdio.h>

int hanoi(int n, int start, int temp, int end)
{
	if (n == 0) return 1;

	hanoi(n - 1, start, end, temp);
	printf("%d %d\n", start, end);
	hanoi(n - 1, temp, start, end);
}

int main()
{
	int n, t = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		t *= 2;
	}
	printf("%d\n", t - 1);
	hanoi(n, 1, 2, 3);
}