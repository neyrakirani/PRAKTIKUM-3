import sys

n, k = map(int, input().split())
total = 0

for i in range(1, n + 1):
    term = []
    amount = 0

    for j in range(i, 0, -1):
        term.append(f"({j} * {k})")
        amount += j * k

    print(" + ".join(term) + f" = {amount}")
    total += amount

print(total)