#include <stdio.h>

int main() {
    int i, j, result;

    printf("   ");
    for (i = 1; i <= 10; i++) {
        printf("%4d", i);
    }
    printf("\n");

    printf("   ");
    for (i = 1; i <= 10; i++) {
        printf("----");
    }
    printf("\n");

    for (i = 1; i <= 10; i++) {
        printf("%2d|", i);

        for (j = 1; j <= 10; j++) {
            result = i * j;
            printf("%4d", result);
        }
        printf("\n");
    }

    return 0;
}
