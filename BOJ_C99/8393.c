#include <stdio.h>

int main()
{
	int n, i, t = 0;
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		t = t + i;
	}
	printf("%d", t);
}