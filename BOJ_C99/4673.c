#include <stdio.h>

int check(int n)
{
	int num = n;
	while (n > 0)
	{
		num += n % 10;
		n /= 10;
	}
	return num;
}

int main()
{
	int a[10001], n, i;
	for (i = 1; i <= 10000; i++)
	{
		n = check(i);
		if (n <= 10000)
		{
			a[n] = 1;
		}
	}
	for (i = 1; i <= 10000; i++)
	{
		if (a[i] != 1)
		{
			printf("%d\n", i);
		}
	}
}