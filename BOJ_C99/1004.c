#include "stdio.h"
#include "math.h"

int main() {
    int T, x_1, y_1, x_2, y_2, n, c_x, c_y, r, d_1, d_2;
    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        int result = 0;
        scanf("%d %d %d %d", &x_1, &y_1, &x_2, &y_2);
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d %d %d", &c_x, &c_y, &r);

            d_1 = sqrtf(powf((float) x_1 - c_x, 2) + powf((float) y_1 - c_y, 2));
            d_2 = sqrtf(powf((float) x_2 - c_x, 2) + powf((float) y_2 - c_y, 2));

            if (d_1 < r)
                result++;
            if (d_2 < r)
                result++;

            if (d_1 < r && d_2 < r)
                result -= 2;
        }

        printf("%d\n", result);
    }
}