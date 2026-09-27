n = int(input())
nums = [int(input()) for _ in range(n)]

stack = []
answer = []
top = 0
possible = True

for obj in nums:
    if top < obj:
        while top < obj:
            top += 1
            stack.append(top)
            answer.append('+')
        stack.pop()
        answer.append('-')
    else:
        if stack and stack[-1] == obj:
            stack.pop()
            answer.append('-')
        else:
            possible = False
            break
if possible:
    for op in answer:
        print (op)
else:
    print('NO')
