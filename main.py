n = 12
res = []
ans = 0
res.append(n)
cycle = False
found = False

while n > 0 and (not cycle and not found):
    digit = n % 10
    n //= 10
    ans += (digit ** 2)
    print(ans)
    print(res)
    if (n <= 0 and ans >= 10):
        if (ans in res):
            cycle = True
        res.append(ans)
        n = ans
        ans = 0
    if (ans == 1):
        found = True

if ans == 1:
    print("Yes")
else:
    print("No")