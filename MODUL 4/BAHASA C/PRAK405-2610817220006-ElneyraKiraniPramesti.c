#include <stdio.h>

int main() {
    int n, k;
    int total = 0;

    scanf("%d %d", &n, &k);

    for (int i = 1; i <= n; i++) {
        int amount = 0;

        for (int j = i; j >= 1; j--) {
            if (j < i) {
                printf(" + ");
            }
            printf("(%d * %d)", j, k);
            amount += j * k;
        }

        printf(" = %d\n", amount);
        total += amount;
    }

    printf("%d\n", total);

    return 0;
}