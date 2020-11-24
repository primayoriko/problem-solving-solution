from random import randint

step = [[1,0], [0,1], [-1,0], [0,-1]]

t = int(input())
for c in range(t):
    n = int(input())
    
    if(n < 4):
        print('impossible')
        continue

    arr = []
    for i in range(n):
        arr.append(['-' for j in range(n)])

    currX, currY = 0, 0
    for i in range(n):
        for j in range(n):
            [dX, dY] = step[randint(0, 3)]



    
    # print(arr)
