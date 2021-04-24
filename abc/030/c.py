N, M = [int(i) for i in input().split()]
X, Y = [int(i) for i in input().split()]
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]

ai = 0
bi = 0
time = 0
schedule = []
while ai < len(a) or bi < len(b):
    while ai < len(a) and a[ai] < time:
        ai += 1
    if ai >= len(a):
        break
    schedule.append(a[ai])
    time = a[ai] + X
    while bi < len(b) and b[bi] < time:
        bi += 1
    if bi >= len(b):
        break
    schedule.append(b[bi])
    time = b[bi] + Y
print(len(schedule) // 2)
