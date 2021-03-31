def to_26_base(n):
    digits = []
    while n != 0:
        n -= 1
        digits.append(chr(ord('a') + n % 26))
        n //= 26
    return list(reversed(digits))
        

n = int(input())
print(''.join(to_26_base(n)))

