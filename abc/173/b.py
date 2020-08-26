n = int(input())

results = {
    'AC': 0,
    'WA': 0,
    'TLE': 0,
    'RE': 0,
}
for i in range(n):
    s = input()
    results[s] += 1

for k, v in results.items():
    print(f'{k} x {v}')
