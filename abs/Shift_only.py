N = int(input())
a = [int(i) for i in input().split()]

min_cnt = None
for ai in a:
    cnt = 0
    while ai % 2 == 0:
        cnt += 1
        ai //= 2
    if min_cnt is None or cnt < min_cnt:
        min_cnt = cnt
print(min_cnt)
