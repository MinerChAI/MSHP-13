x1, y1, x2, y2, x3, y3 = [int(i) for i in input().split()]

if x1 == x2: x = x3
if x1 == x3: x = x2
if x3 == x2: x = x1

if y1 == y2: y = y3
if y1 == y3: y = y2
if y3 == y2: y = y1

print(x, y)