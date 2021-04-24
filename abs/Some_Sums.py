N, A, B = [int(i) for i in input().split()]

def digits_sum(n):
  s = 0
  while n > 0:
    s += n % 10
    n = n // 10
  return s

ans = 0
for i in range(1, N + 1):
  if A <= digits_sum(i) <= B:
    ans += i
print(ans)
