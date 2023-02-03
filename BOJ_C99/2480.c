#include <stdio.h>

int main()
{
	int a, b, c, result;
	scanf("%d %d %d", &a, &b, &c);
	//3개 같음
	if (a == b && b == c) {
		result = a * 1000 + 10000;
	}
	//2개 같음
	if (a == b && b != c) {
		result = a * 100 + 1000;
	}
	if (a == c && a != b) {
		result = a * 100 + 1000;
	}
	if (a != b && b == c) {
		result = b * 100 + 1000;
	}
	//다 다름
	if ((a > b && b > c) || (a > c && c > b)) {	//a가 가장 클때
		result = a * 100;
	}
	if ((b > a && a > c) || (b > c && c > a)) {	//b가 가장 클때
		result = b * 100;
	}
	if ((c > a && a > b) || (c > b && b > a)) {	//c가 가장 클때
		result = c * 100;
	}
	printf("%d", result);
}