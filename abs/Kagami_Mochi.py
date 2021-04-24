N = int(input())
d = []
for _ in range(N):
    d.append(int(input()))

d = sorted(d)
mochi = [d[0]]
i = 1
while i < len(d):
    if d[i] > mochi[-1]:
        mochi.append(d[i])
    i += 1
print(len(mochi))
