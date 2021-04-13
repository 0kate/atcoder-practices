n, m = [int(i) for i in input().split(' ')]
cities = []
for idx in range(m):
    city = [int(i) for i in input().split(' ')]
    city.append(idx)
    cities.append(city)

id_table = {}
ids = []
cities = sorted(cities, key=lambda city: city[1])
for city in cities:
    if city[0] not in id_table:
        id_table[city[0]] = 1
    id = id_table[city[0]]
    id_table[city[0]] += 1

    p_str = ('000000' + str(city[0]))[-6:]
    id_str = ('000000' + str(id))[-6:]
    ids.append((f'{p_str}{id_str}', city[2]))

ids = sorted(ids, key=lambda id: id[1])
for id in ids:
    print(id[0])
