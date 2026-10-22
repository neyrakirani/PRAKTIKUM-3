#include <stdio.h>

int digits(long long n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + digits(n / 10);
}

int main() {
    long long n;
    scanf("%lld", &n);
    printf("Jumlah digit dari %lld adalah %d\n", n, digits(n));
    return 0;
}