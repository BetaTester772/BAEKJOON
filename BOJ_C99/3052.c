#include <stdio.h>

int main()
{
	int arr[42] = { 0, }, i, n;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		arr[n % 42]++;
	}
	n = 0;
	for (i = 0; i < 42; i++)
	{
		if (arr[i] > 0)
		{
			n++;
		}
	}
	printf("%d", n);
}