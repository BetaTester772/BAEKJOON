#include <stdio.h>

int main()
{
	int i = 0, j;
	char s[100], S;


	scanf("%s", &s);

	while (s[i] != 0)
	{
		S = (int)s[i];
		if (S >= 97) S -= 32;
		else S += 32;
		printf("%c", S);
		i++;
	}
	//printf("%d %d %d %d %d %d", 'a', 'A', 'b', 'B', 'z', 'Z');
	//97 65 98 66 122 90
}