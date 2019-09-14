n = input()

while(n):
	s = raw_input()
	t = ""

	for i in range(0,len(s)):
		if(s[i].isnumeric()):
			t = t+s[i];
		else:
			print(t)
			t = ""
	n = n-1