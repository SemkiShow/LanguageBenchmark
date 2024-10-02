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
A[0] = False
A[1] = False    
outputFile = open("Prime/primepy.txt", 'w')
for i in range(N):
    if A[i] == True:
        outputFile.write(str(i) + "\n")
outputFile.close()
        