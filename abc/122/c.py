n, q = [int(i) for i in input().split()]
s = input()

summary = [0] * n
summary[1] = 1 if s[0:2] == 'AC' else 0
for i in range(2, n):
    summary[i] = summary[i-1]
    if s[i-1:i+1] == 'AC':
        summary[i] += 1

for _ in range(q):
    l, r = [int(i) for i in input().split()]
    l -= 1
    r -= 1
    print(summary[r] - summary[l])
    
    
