#include <stdio.h>

int main()
{
	int h, m, t;
	scanf("%d %d\n%d", &h, &m, &t);
	if (m + t >= 60) {
		h = h + t / 60;
		m = m + t % 60;
		if (m >= 60) {
			h++;
			m = m - 60;
		}
		if (h >= 24) {
			h = h - 24;
		}
	}
	else
	{
		m = m + t;
		if (h >= 24) {
			h = h - 24;
		}
	}
	printf("%d %d", h, m);
}