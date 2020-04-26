n, m, x = [int(n) for n in input().split(' ')]
a = [int(n) for n in input().split(' ')]
cost = [0] * (n + 1)

for i in range(0, m):
    cost[a[i]] = 1

print(min(sum(cost[:x]), sum(cost[x:])))
