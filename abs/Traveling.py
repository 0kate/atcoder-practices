N = int(input())
t = []
x = []
y = []
for i in range(N):
    ti, xi, yi = [int(i) for i in input().split()]
    t.append(ti)
    x.append(xi)
    y.append(yi)

current_time = 0
position = (0, 0)
movable = True
for i in range(N):
    time_diff = t[i] - current_time
    move_diff = abs(position[0] - x[i]) + abs(position[1] - y[i])
    if time_diff < move_diff:
        movable = False
        break
    else:
        left_time = time_diff - move_diff
        if left_time % 2 != 0:
            movable = False
            break
    current_time = t[i]
    position = (x[i], y[i])
print('Yes' if movable else 'No')
