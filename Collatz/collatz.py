def Collatz(N):
    while N != 1:
        if N % 2 == 0:
            N /= 2
        else:
            N *= 3
            N += 1

N = 2**32
printDuty = 10**6
for i in range(1, N, printDuty):
    print("Calculating " + str(i) + " (" + str(round(i * 1.0 / N * 100, 3)) + "%)")
    for j in range(i, i+printDuty):
        Collatz(j)
