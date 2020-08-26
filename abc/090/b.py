a, b = [int(n) for n in input().split(' ')]

cnt = 0
for n in range(a, b+1):
    sn = str(n)
    if sn == sn[::-1]:
        cnt += 1

print(cnt)
