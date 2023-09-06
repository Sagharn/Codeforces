n = int(input())
counter = 0
for i in range(n):
    p, v, t = map(int, input().split())
    if p + v + t >= 2:
        counter += 1
print(counter)
