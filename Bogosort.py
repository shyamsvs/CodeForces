def cal(test):
    while test:
        a = int(input())
        l = list(map(int, input().split(" ")))
        l.sort()
        l.reverse()
        for i in range(0,a):
            print(l[i],end=" ")
        test -= 1
inval = int(input())
cal(inval)
