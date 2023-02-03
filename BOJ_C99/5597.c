#include <stdio.h>

int main() {
	int std[30] = { 0, }, i, in;
	for (i = 0; i < 28; i++) {
		scanf("%d", &in);
		std[in - 1] = in;
	}
	for (i = 0; i < 30; i++) {
		if (std[i] == 0)
			printf("%d\n", i + 1);
	}
}