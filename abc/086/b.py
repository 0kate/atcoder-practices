a, b = [int(n) for n in input().split(' ')]

x = int(str(a) + str(b))

found = False
n = 1
while n * n <= x:
    if n * n == x:
        found = True
        break
    n += 1

print('Yes' if found else 'No')
