from dataclasses import dataclass

@dataclass
class Shop:
    price: int
    amount: int

shops = []
n, m = [int(v) for v in input().split(' ')]
for i in range(n):
    a, b = [int(v) for v in input().split(' ')]
    shops.append(Shop(price=a, amount=b))

budget = 0
shops.sort(key=lambda shop: shop.price)
for shop in shops:
    if shop.amount < m:
        budget += (shop.price * shop.amount)
        m -= shop.amount
    else:
        budget += (shop.price * m)
        m = 0
    if m < 1:
        break
print(budget)
