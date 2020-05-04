n, m = [int(n) for n in input().split(' ')]

s, c = [], []
for i in range(m):
    si, ci = [int(n) for n in input().split(' ')]
    s.append(si-1)
    c.append(ci)

ans = -1
for nn in range(1000):
    sn = str(nn)

    found = True
    if len(sn) == n:
        for si, ci in zip(s, c):
            if int(sn[si]) != ci:
                found = False
                break
    else:
        found = False

    if found:
        ans = nn
        break

print(ans)
