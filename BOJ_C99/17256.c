#include "stdio.h"

//a 🍰 b = (a.z + b.x, a.y × b.y, a.x + b.z) = (c.x, c.y, c.x)

int main() {
    int a_x, a_y, a_z, c_x, c_y, c_z, b_x, b_y, b_z;
    scanf("%d %d %d", &a_x, &a_y, &a_z);
    scanf("%d %d %d", &c_x, &c_y, &c_z);
    b_x = c_x - a_z;
    b_y = c_y / a_y;
    b_z = c_z - a_x;
    printf("%d %d %d", b_x, b_y, b_z);
}