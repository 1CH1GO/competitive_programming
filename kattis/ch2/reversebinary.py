n = int(input())
m = bin(n).replace("0b", "")
m = m[-1::-1]
print(int(m, 2))
