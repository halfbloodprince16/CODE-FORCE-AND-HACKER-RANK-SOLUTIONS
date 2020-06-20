
def cub_root(n):
	cr = n**(1./3.)
	if(round(cr)**3 == n):
		print(round(cr))
	else:
		print(cr,"Not a cube root")

x = int(input())
cub_root(x)
