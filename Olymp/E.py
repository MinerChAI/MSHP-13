h, w = [int(input()) for i in range(2)]
print('FAT' if w > h - 100 else ('OPTIMUM' if w == h - 100 else 'THIN'))