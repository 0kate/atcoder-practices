K = int(input())

a = [7 % K]
for i in range(1, K + 1):
    a.append((a[i-1] * 10 + 7) % K)

ans = -1
for i in range(len(a)):
    if a[i] == 0:
        ans = i + 1
        break
print(ans)
        
