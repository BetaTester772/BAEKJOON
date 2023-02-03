#include <stdio.h>

int check(int n)
{
	int arr[4], m = 0;
	while (n > 0)
	{
		arr[m] = n % 10;
		n /= 10;
		m++;
	} // 123
	if (m == 1 || m == 2) return 1;
	if (m == 3 && arr[0] - arr[1] == arr[1] - arr[2]) return 1;
	if (m == 4 && arr[0] - arr[1] == arr[1] - arr[2] && arr[1] - arr[2] == arr[2] - arr[3]) return 1;
	return 0;
}

int main()
{
	int N, count = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		count += check(i);
	}
	printf("%d", count);
}