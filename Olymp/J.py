s = ''
n = 2872649446782371305648462613
for i in range(14):
    #print((n % (137 ** (i - 1))), (137 ** i))
    s += chr(n // (137 ** i) % 137)
print(*reversed(s), sep='')