#include <stdio.h>

int main()
{
	int T, R, i, j = 0;
	char S[20];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		j = 0;
		scanf("%d ", &R);
		scanf("%s", &S);
		while (S[j] != 0)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
			j++;
		}
		printf("\n");
	}
}