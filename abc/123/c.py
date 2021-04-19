import math

n = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

print(max(math.ceil(n / a), math.ceil(n / b), math.ceil(n / c), math.ceil(n / d), math.ceil(n / e)) + 4)
