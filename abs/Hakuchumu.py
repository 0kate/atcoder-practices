s = input()
keywords = ['dream', 'dreamer', 'erase', 'eraser']

s = s[::-1]
i = 0
creatable = True
while i < len(s):
    found = False
    for keyword in keywords:
        if s[i:].startswith(keyword[::-1]):
            found = True
            i += len(keyword)
            break
    if not found:
        creatable = False
        break
print('YES' if creatable else 'NO')
