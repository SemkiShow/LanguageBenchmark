import random
N = 10 ** 6
output = 0
for i in range(N):
    output = random.randrange(100) ** random.randrange(10)
    print(output)
