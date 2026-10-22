#include <stdio.h>

int main() {
    int choose;
    double a, b, result;

    do {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choose);

        if (choose == 5) {
            printf("Terimakasih, telah menggunakan kalkulator ELNEYRAKIRANIPRAMESTI\n");
        } else if (choose >= 1 && choose <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%lf", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%lf", &b);

            switch (choose) {
                case 1:
                    result = a + b;
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, result);
                    break;
                case 2:
                    result = a - b;
                    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, result);
                    break;
                case 3:
                    result = a * b;
                    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, result);
                    break;
                case 4:
                    if (b == 0) {
                        printf("Pembagian dengan nol tidak dapat dilakukan\n");
                    } else {
                        result = a / b;
                        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, result);
                    }
                    break;
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
        printf("\n");
    } while (choose != 5);

    return 0;
}