#include <stdio.h>
#include <string.h>

int main()
{
	int T, i;
	char S[1000];
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%s", &S);
		printf("%c%c\n", S[0], S[strlen(S) - 1]);
	}
}