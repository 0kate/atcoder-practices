n, k = [int(v) for v in input().split(' ')]
trees = []
for i in range(n):
    tree = int(input())
    trees.append(tree)

ans = -1
trees.sort(reverse=True)
for i in range(n - k + 1):
    beauty = trees[i] - trees[i + k - 1]
    if ans < 0:
        ans = beauty
    else:
        ans = min(ans, beauty)
print(ans)
