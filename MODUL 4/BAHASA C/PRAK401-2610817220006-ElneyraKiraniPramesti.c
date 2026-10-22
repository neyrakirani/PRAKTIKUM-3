#include <stdio.h>

int main() {
    int number;
    char symbol[10];

    scanf("%d", &number);
    scanf("%s", symbol);

    for (int i = 1; i <= 50; i++) {
        if (i % number == 0) {
            printf("%s ", symbol);
        } else {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}