son1, son2 = map(int, input().split())

l = []

for i in range(son1):
    q, j, k = map(int, input().split())
    l.append(list((q,j, k)))
diffes = list()
for i in range(len(l)):
    for j in range(i+1, len(l)):
        diffes.append(list((i,j,max(abs(l[i][0] - l[j][0]), abs(l[i][1] - l[j][1]), abs(l[i][2] - l[j][2])))))

        diffes = sorted(diffes)[::son2]
for i in diffes:
    print(i[2])
    print(i[0], i[1])