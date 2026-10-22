#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    int even = (n % 2 == 0) ? n : n - 1;

    for (int i = even; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}