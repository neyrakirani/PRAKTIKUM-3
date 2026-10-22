#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, step, i;

    scanf("%d %d", &a, &b);

    if (a < b) {
        step = 1;
    } else {
        step = -1;
    }

    for (i = 0; i <= abs(a - b); i++) {
        if (i > 0) {
            printf(" - ");
        }
        printf("%d %d", a + i * step, b - i * step);
        if (i < abs(a - b)) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}