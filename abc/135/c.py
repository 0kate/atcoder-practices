n = int(input())

monsters = [int(v) for v in input().split(' ')]
capacity = [int(v) for v in input().split(' ')]

bustered = 0
for i in range(n):
    bustable = min(capacity[i], monsters[i])
    bustered += bustable
    monsters[i] -= bustable
    capacity[i] -= bustable

    bustable = min(capacity[i], monsters[i + 1])
    bustered += bustable
    monsters[i + 1] -= bustable
    capacity[i] -= bustable

bustered += min(capacity[n - 1], monsters[n])

print(bustered)
