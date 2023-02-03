#include <stdio.h>

int ACM(int H, int W, int N)
{
	int h, w;
	h = N % H;
	w = N / H + 1;
	if (N % H == 0) {
		h = H;
		w--;
	}
	printf("%d\n", h * 100 + w);
	return 1;
}

int main()
{
	int T, H, W, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d", &H, &W, &N);
		ACM(H, W, N);
	}
}