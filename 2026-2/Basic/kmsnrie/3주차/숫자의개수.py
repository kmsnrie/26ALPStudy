A = int(input())
B = int(input())
C = int(input())

multiple = A * B * C
s = str(multiple)

count = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

for ch in s:
    num = int(ch)
    count[num] = count[num] + 1

for i in range(10):
    print(count[i])
