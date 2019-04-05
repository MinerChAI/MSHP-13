def spam():
    t = a[n - 1]
    for i in range(n - 1,  0, -1): a[i] = a[i - 1]
    a[0] = t

n, t = [int(i) for i in input().split()]
a = [i for i in range(1, n + 1)]
for i in range((n // 3 + t) % n): spam()
print(a[0], a[n // 3 - 1])