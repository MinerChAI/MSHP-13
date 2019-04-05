from itertools import permutations as perm

for i in perm(range(1, 6)):
    if (i[4] == 1) != (i[2] == 2) and (i[0] == 2) != (i[3] == 4) and (i[2] == 3) != (i[4] == 5) and (i[2] == 1) != (i[3] == 4) and (i[0] == 2) != (i[2] == 3): print(i[0]) 