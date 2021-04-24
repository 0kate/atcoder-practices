N, Y = [int(i) for i in input().split()]

ans = (-1, -1, -1)
for i in range(0, N + 1):
    for j in range(0, N + 1):
        k = N - (i + j)
        if k < 0:
            break
        if (10000 * i) + (5000 * j) + (1000 * k) == Y:
            ans = (i, j, k)
            break
    if ans != (-1, -1, -1):
        break
print(' '.join([str(n) for n in ans]))
