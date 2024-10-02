import math,sys

def NextFibonacci(a, b):
    return a+b

a = 1
b = 1
c = 1
outputFile = open("Fibonacci/fibonaccipy.txt", "w")
N = 10**4 - 1
printDuty = 1000
outputFile.write("1\n1\n")
for i in range(0, N, printDuty):
    if len(str(c)) > 640:
        sys.set_int_max_str_digits(len(str(c))+int(printDuty/4))
    print("Calculating " + str(i) + " (" + str(round(i * 1.0 / N * 100, 3)) + "%)")
    for j in range(i, i+printDuty):
        c = NextFibonacci(a, b)
        outputFile.write(str(c) + "\n")
        a = b
        b = c
print("Calculating " + str(N) + " (" + str(round(N * 1.0 / N * 100, 3)) + "%)")
outputFile.close()
print("The last calculated Fibonacci number is " + str(c))
