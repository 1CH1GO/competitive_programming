import math

n, m = map(int, input().split())

z = int(math.log2(1e101))
if m >= 335:
	print("Your wish is granted!")
elif 2**m >= n:
	print("Your wish is granted!")
else:
	print("You will become a flying monkey!")