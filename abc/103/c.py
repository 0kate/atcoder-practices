import functools


def euclid(a, b):
    while b:
        a, b = b, a%b
    return a


def multiple(a, b):
    return a*b // euclid(a, b)


def lcm(nums):
        return functools.reduce(multiple, nums)


n = int(input())
a = [int(i) for i in input().split()]
m = lcm(a) - 1

s = 0
for ai in a:
    s += (m % ai)

print(s)    
