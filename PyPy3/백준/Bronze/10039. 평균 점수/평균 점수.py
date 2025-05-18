su = 0
for _ in range(5):
    point = int(input())
    if point < 40:
        point = 40
    su += point
av = int(su/5)
print(av)