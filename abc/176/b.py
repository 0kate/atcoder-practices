n = input()
s = sum([int(nn) for nn in n.split()])
print('Yes' if s % 9 == 0 else 'No')
