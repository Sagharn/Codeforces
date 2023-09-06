n = int(input())
array = list(map(int, input().split()))

index = {}
for i, num in enumerate(array, start=1):
    index[num] = i

m = int(input())
queries = list(map(int, input().split()))

Vasya = 0
Petya = 0
for query in queries:
    Vasya += index[query]
    Petya += (n + 1 - index[query])

print(Vasya, Petya)
