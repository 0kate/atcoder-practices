from itertools import zip_longest

n = int(input())
v = input().split(' ')

v1 = v[0::2]
v2 = v[1::2]

v1_count_table = {}
v2_count_table = {}
for v1i, v2i in zip_longest(v1, v2):
    if not v1i or not v2i:
        continue
    if v1i not in v1_count_table:
        v1_count_table[v1i] = 0
    if v2i not in v2_count_table:
        v2_count_table[v2i] = 0
    v1_count_table[v1i] += 1
    v2_count_table[v2i] += 1

v1_counts = sorted(v1_count_table.items(), key=lambda item: item[1])
v2_counts = sorted(v2_count_table.items(), key=lambda item: item[1])

if len(set(v)) == 1:
    ans = min(len(v1), len(v2))
elif v1_counts[-1][0] == v2_counts[-1][0]:
    ans = min(
        (len(v1) - v1_counts[-1][1]) + (len(v2) - v2_counts[-2][1]),
        (len(v1) - v1_counts[-2][1]) + (len(v2) - v2_counts[-1][1])
    )
else:
    ans = (len(v1) - v1_counts[-1][1]) + (len(v2) - v2_counts[-1][1])
print(ans)
