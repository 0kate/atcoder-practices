n = int(input())
s = input()

to_east_turns = [0] * n
to_east_turns[0] = 1 if s[0] == 'W' else 0
to_west_turns = [0] * n
to_west_turns[n-1] = 1 if s[-1] == 'E' else 0
for i in range(1, n):
    to_east_turns[i] = to_east_turns[i-1]
    to_east_turns[i] += 1 if s[i] == 'W' else 0
    to_west_turns[n-1-i] = to_west_turns[n-i]
    to_west_turns[n-1-i] += 1 if s[n-1-i] == 'E' else 0

turn_sums = [to_east_turns[i] + to_west_turns[i+1] for i in range(n-1)]
turn_sums.append(to_east_turns[-1])
turn_sums.append(to_west_turns[0])

print(min(turn_sums))
