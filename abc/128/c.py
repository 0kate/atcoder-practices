n, m = [int(i) for i in input().split()]
k = [[int(i) - 1 for i in input().split()][1:] for _ in range(m)]
p = [int(i) for i in input().split()]

patterns = 0
for i in range(2 ** n):
    switches = (('0' * n) + str(bin(i))[2:])[-n:]
    is_all_lit = True
    for j in range(m):
        connected_switches = k[j]
        on_count = 0
        for connected_switch in connected_switches:
            on_count += 1 if switches[connected_switch] == '1' else 0
        if on_count % 2 != p[j]:
            is_all_lit = False
            break
    patterns += 1 if is_all_lit else 0
print(patterns)
            
        
