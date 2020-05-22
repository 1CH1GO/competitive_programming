import math

t = int(input())
while t:
	n = int(input())
	ans = 0
	while n:
		s = bin(n).replace('0b', '')
		z = sum([1 for ch in s if ch == '1'])
		if ans < z: ans = z
		n //= 10
	
	print(ans)
	t -= 1