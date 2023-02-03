#include <stdio.h>

int n(char s)
{
	char alpha[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	for (int i = 0; i < 26; i++)
	{
		if (s == alpha[i]) return i;
	}
}

int main()
{
	int i = 0, arr[26];
	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	char S[100];
	scanf("%s", &S);
	while (S[i] != 0)
	{
		int N = n(S[i]);
		if (arr[N] == -1) arr[N] = i;
		i++;
	}
	for (i = 0; i < 26; i++)
	{
		printf("%d ", arr[i]);
	}
}