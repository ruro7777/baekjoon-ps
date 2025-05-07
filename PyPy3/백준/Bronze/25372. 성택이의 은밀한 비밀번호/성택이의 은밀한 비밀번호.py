n = int(input())

for i in range(n):
    s = list(input().strip())
    length = len(s)
    if length >= 6 and length <= 9 : print('yes')
    else : print('no')