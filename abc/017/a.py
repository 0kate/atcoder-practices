score = 0
for i in range(3):
    s, e = [int(n) for n in input().split(' ')]
    score += int(s * (e / 10))
print(score)
