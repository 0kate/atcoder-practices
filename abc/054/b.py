n, m = [int(i) for i in input().split(' ')]
a = [list(input()) for _ in range(n)]
b = [list(input()) for _ in range(m)]

def search_b(y, x):
    for offset_y in range(m):
        for offset_x in range(m):
            if a[y + offset_y][x + offset_x] != b[offset_y][offset_x]:
                return False
    return True


found = False
for y in range(0, n - m + 1):
    for x in range(0, n - m + 1):
        found = search_b(y, x)
        if found:
            break
    if found:
        break

print('Yes' if found else 'No')
    
