while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")

    try:
        choose = int(input("Masukkan Pilihan : "))
    except ValueError:
        print("Input anda salah, silahkan coba lagi\n")
        continue

    if choose == 5:
        print("Terimakasih, telah menggunakan kalkulator ELNEYRAKIRANIPRAMESTI")
        break
    elif 1 <= choose <= 4:
        a = float(input("Masukkan nilai pertama : "))
        b = float(input("Masukkan nilai kedua : "))

        if choose == 1:
            print(f"Hasil penjumlahan antara {a:.2f} dengan {b:.2f} adalah {a + b:.2f}")
        elif choose == 2:
            print(f"Hasil pengurangan antara {a:.2f} dengan {b:.2f} adalah {a - b:.2f}")
        elif choose == 3:
            print(f"Hasil perkalian antara {a:.2f} dengan {b:.2f} adalah {a * b:.2f}")
        else:
            if b == 0:
                print("Pembagian dengan nol tidak dapat dilakukan")
            else:
                print(f"Hasil pembagian antara {a:.2f} dengan {b:.2f} adalah {a / b:.2f}")
        print()
    else:
        print("Input anda salah, silahkan coba lagi\n")