N = int(input())
queue = list(range(1, N + 1))

while len(queue) > 1:
    queue.pop(0)                  
    queue.append(queue.pop(0))

print(queue[0])
