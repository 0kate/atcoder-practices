import re

a, b = [int(n) for n in input().split(' ')]
s = input()

pattern = '[0-9]{' + str(a) + '}-[0-9]{' + str(b) + '}'
print('Yes' if re.match(pattern, s) else 'No')
