#include <stdio.h>

int main()
{
	long long A, B;
	while (1)
	{
		scanf("%lld %lld", &A, &B);
		if (A + B == 0) break;
		if (A>B)
		{
			printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
}