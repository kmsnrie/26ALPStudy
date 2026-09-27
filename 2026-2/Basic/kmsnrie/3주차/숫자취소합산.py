k = int(input())

stack = []
for i in range(k):
    x = int(input())
    if x == 0:
        stack.pop()
    else:
        stack.append(x)

total = 0
for num in stack:
    total += num

print(total)
