#include <stdio.h>

int main()
{
	int n, i, a = 1;
	scanf("%d", &n);
	for (i = 0; ; i++)
	{
		a += 6 * i;
		if (n <= a)
		{
			printf("%d", i + 1);
			break;
		}
	}
}