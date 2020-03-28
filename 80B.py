import string
import math

n = raw_input()
x = n.split(':')
a = int(x[0])
b = int(x[1])
a = a%12
b = b%60


if(math.floor(float(a*60+b)/2) == math.ceil(float(a*60+b)/2)):
	a1 = (a*60+b)/2
	a2 = b*6
	print(str(a1)+" "+str(a2))
else:
	a1 = ((a*60+b)/2.0)
	a2 = b*6
	print(str(a1)+" "+str(a2))