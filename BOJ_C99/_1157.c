#include <stdio.h>

int main()
{
	char S[1000000] = { 0, }, s; int arr[26] = { 0, };
	int m = 0, i = 0, n;
	scanf("%s", S);

	while (S[i] != 0)
	{
		s = (int)S[i];
		if (s >= 97) arr[s - 97]++;
		else arr[s - 65]++;
		i++;
	}

	for (i = 0; i < 26; i++)
	{
		if (arr[i] > m) {
			n = i;
			m = arr[i];
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (i != n && arr[i] == m) {
			printf("?");
			return 0;
		}
	}
	printf("%c",n + 'A');
    return 0;
}