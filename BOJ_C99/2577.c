#include <stdio.h>

int main()
{
	int a, b, c, n, m, i, arr[10] = { 0, }, len = 0;
	scanf("%d\n%d\n%d", &a, &b, &c);
	n = a * b * c;
	while (n > 0)
	{
		m = n % 10;
		n = n / 10;
		arr[m]++;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}
}