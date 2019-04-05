s1 = sorted([int(i) for i in input().split()])
s2 = sorted([int(i) for i in input().split()])

print('Equal' if all([s1[i] == s2[i] for i in range(3)]) else 'First smaller' if all([s1[i] <= s2[i] for i in range(3)]) else 'Second smaller' if all([s1[i] >= s2[i] for i in range(3)]) else 'Incomparable')