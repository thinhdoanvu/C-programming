import random

n = 20
k = 3

s = [random.randint(-10, 10) for _ in range(n)]

print(n, k)
print(" ".join(map(str, s)))
