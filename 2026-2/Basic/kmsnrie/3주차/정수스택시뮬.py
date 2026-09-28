N = int(input())
stack = []

for i in range(N):
    cmd = input()

    if cmd == "pop":
        if len(stack) == 0:
            print(-1)
        else:
            print(stack.pop())
    elif cmd == "size":
        print(len(stack))
    elif cmd == "empty":
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "top":
        if len(stack) == 0:
            print(-1)
        else:
            print(stack[-1])
    else:
        words = cmd.split()
        x = int(words[1])
        stack.append(x)
