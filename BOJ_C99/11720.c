#include <stdio.h>

int main()
{
	int N, sum = 0;
	scanf("%d", &N);
	char s[N];
	scanf("%s", &s);
	for (int i = 0; i < N; i++)
	{
		sum += s[i] - '0';
	}
	printf("%d", sum);
}