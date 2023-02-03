#include <stdio.h>

int main()
{
	int i, result;
	char S[8], ex[2][15] = { {"12345678"}, {"87654321"} };
	for (i = 0; i < 7; i++)
	{
		scanf("%c ", &S[i]);
	}
	scanf("%c", &S[7]);

	result = 0;
	for (i = 0; i < 8; i++)
	{
		if (S[i] == ex[0][i]) result++;
	}
	if (result == 8) {
		printf("ascending");
		return 0;
	}
	result = 0;
	for (i = 0; i < 8; i++)
	{
		if (S[i] == ex[1][i]) result++;
	}
	if (result == 8) {
		printf("descending");
		return 0;
	}
	printf("mixed");
}