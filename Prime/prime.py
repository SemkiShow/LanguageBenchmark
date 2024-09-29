import math

def SieveOfEratosthenes (n):
    A = []
    A = [True for i in range(n+1)]
    for i in range(2, int(math.sqrt(n))):
        if A[i] == True:
            j = i**2
            while j <= n:
                A[j] = False
                j += i
    return A

N = 10**6
A = SieveOfEratosthenes(N)
outputFile = open("primepy.txt", 'w')
for i in range(N):
    outputFile.write(str(i) + ": " + str(A[i]) + "\n")
outputFile.close()
        