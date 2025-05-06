n = int(input())
chi = list(map(int, input().split()))
ans = 0

for i in range(3):
    if chi[i]<=n:
        ans += chi[i]
    else:
        ans += n

print(ans)