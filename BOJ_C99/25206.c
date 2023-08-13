#include "stdio.h"
#include "string.h"

float grade(char c[2]) {
    if (strcmp(c, "A+") == 0) {
        return 4.5;
    } else if (strcmp(c, "A0") == 0) {
        return 4.0;
    } else if (strcmp(c, "B+") == 0) {
        return 3.5;
    } else if (strcmp(c, "B0") == 0) {
        return 3;
    } else if (strcmp(c, "C+") == 0) {
        return 2.5;
    } else if (strcmp(c, "C0") == 0) {
        return 2.0;
    } else if (strcmp(c, "C-") == 0) {
        return 1.7;
    } else if (strcmp(c, "D+") == 0) {
        return 1.5;
    } else if (strcmp(c, "D0") == 0) {
        return 1.0;
    } else if (strcmp(c, "F") == 0) {
        return 0.0;
    } else return 0;
}

int main() {
    char Grade[2], subject[51];
    float score = 0;
    float total = 0, grade_total = 0;
    int i = 0;
    for (; i < 20; ++i) {
        scanf("%s %f %s", subject, &score, Grade);
        if (strcmp(Grade, "P") != 0) {
            total += score * grade(Grade);
            grade_total += score;
        }
    }
    printf("%f", total / grade_total);
}
