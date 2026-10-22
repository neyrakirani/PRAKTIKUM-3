#include <stdio.h>

int hanoi(int n) {
    if (n == 0) {
        return 0;
    }
    return (2 * hanoi(n - 1) + 1);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah langkah minimum untuk %d cakram adalah %d\n", n, hanoi(n));
    return 0;
}