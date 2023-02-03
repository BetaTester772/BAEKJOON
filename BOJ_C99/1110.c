#include <stdio.h>

int main()
{
	int a, b, n, m, i=0, num;
	scanf("%d", &n);
	num = n;
	for (;;) {
		a = n / 10; //10의 자리수
		b = n % 10; //1의 자리수
		m = a + b;
		n = b * 10 + m % 10;
		i++;
		if (num == n) break;
	}
	printf("%d", i);
}