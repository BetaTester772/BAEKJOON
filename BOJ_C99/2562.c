#include <stdio.h>

int main()
{
	int arr[9], i, M=0, a, i_i;
	for (i = 0; i < 9; i++)
	{
		scanf("%d", &a);
		arr[i] = a;
	}
	for (i = 0; i < 9; i++)
	{
		if (arr[i] > M) {
			M = arr[i];
			i_i = i + 1;
		}
	}
	printf("%d\n%d", M, i_i);
}