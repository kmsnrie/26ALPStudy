N = int(input())
deq = []

for i in range(N):
    cmd = input()

    if cmd == "pop_front":
        if len(deq) == 0:
            print(-1)
        else:
            print(deq.pop(0))
    elif cmd == "pop_back":
        if len(deq) == 0:
            print(-1)
        else:
            print(deq.pop())
    elif cmd == "size":
        print(len(deq))
    elif cmd == "empty":
        if len(deq) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "front":
        if len(deq) == 0:
            print(-1)
        else:
            print(deq[0])
    elif cmd == "back":
        if len(deq) == 0:
            print(-1)
        else:
            print(deq[-1])
    else:
        words = cmd.split()
        x = int(words[1])
        if words[0] == "push_front":
            deq.insert(0, x)
        else:
            deq.append(x)
