n = int(input())
s = input()

max_chars = 0
for i in range(1, len(s)):
    s1, s2 = s[:i], s[i:]
    s1_chars = set(s1)
    s2_chars = set(s2)

    same_chars = s1_chars & s2_chars
    max_chars = max(max_chars, len(same_chars))

print(max_chars)
