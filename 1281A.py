import math
import string

n = int(raw_input())
for i in range(0,n):
	s = raw_input()
	a = s[-2:]
	b = s[-4:]
	c = s[-5:]

	if(a == "po"):
		print("FILIPINO")
	elif(b == "desu" or b == "masu"):
		print("JAPANESE")
	elif(c == "mnida"):
		print("KOREAN")