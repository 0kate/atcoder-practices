n = int(input())
h = [int(v) for v in input().split(' ')]

buildable = True
for i in range(n - 1):
    diff = h[i + 1] - h[i]
    if diff == -1:
        h[i + 1] += 1
    if diff <= -2:
        buildable = False
        break
print('Yes' if buildable else 'No')
