N = int(input())
a = [int(i) for i in input().split()]

alice = 0
bob = 0
a = list(reversed(sorted(a)))
for i in range(N):
  if i % 2 == 0:
    alice += a[i]
  else:
    bob += a[i]
print(alice - bob)
