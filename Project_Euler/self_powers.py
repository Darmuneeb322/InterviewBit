def series(n):
    S = 0
    for i in range(1,n+1):
        S += i**i
    print(S%10000000000)

series(1000)