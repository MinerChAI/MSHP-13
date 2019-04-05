x, y = [int(i) for i in input().split()]

print('r' if (x - 1) % 3 <= (y - 1) % 3 else 'l', abs((x - 1) % 3 - (y - 1) % 3), '\nd' if (x - 1) // 3 <= (y - 1) // 3 else '\nu', abs((x - 1) // 3 - (y - 1) // 3), )