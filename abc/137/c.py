n = int(input())

cnt = 0
anagrams = {}
for _ in range(n):
    s = input()
    sorted_s = ''.join(sorted(s))
    if sorted_s in anagrams:
        anagrams[sorted_s] += 1
        cnt += anagrams[sorted_s]
    else:
        anagrams[sorted_s] = 0

print(cnt)
