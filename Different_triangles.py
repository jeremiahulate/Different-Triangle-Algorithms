#ascending triangle
rows1 = 6
for i in range(rows1):
    for j in range(i):
        print(i, end = ' ')
    print(' ')
print("\n")

#descending  triangle
rows2 = 5
a = 0
for i in range(rows2, 0, -1):
    a += 1
    for j in range(1, i + 1):
        print(a, end=' ')
    print('\r')
print("\n")

# upside down triangle using astriks
rows3 = 5
b = 2 * rows3 - 2
for i in range(rows3, -1, -1):
    for j in range(b, 0, -1):
        print(end=" ")
    b = b + 1
    for j in range (0, i + 1):
        print("*", end= " ")
    print("")
