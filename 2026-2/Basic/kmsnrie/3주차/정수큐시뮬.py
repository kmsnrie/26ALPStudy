N = int(input())
queue = []

for i in range(N):
    cmd = input()

    if cmd == "pop":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.pop(0))
    elif cmd == "size":
        print(len(queue))
    elif cmd == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    elif cmd == "back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])
    else:
        words = cmd.split()
        x = int(words[1])
        queue.append(x)
