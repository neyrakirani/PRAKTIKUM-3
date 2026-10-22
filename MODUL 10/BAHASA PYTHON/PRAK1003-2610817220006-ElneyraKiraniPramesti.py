def numbers(n):
    if n == 0:
        return 0
    return (n % 10) + numbers(n // 10)

n = int(input())
print(f"Jumlah digit dari {n} adalah {numbers(n)}")