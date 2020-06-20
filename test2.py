x = [1, 5, 7, 10, 44, 3, 1, 5, 'd', 'f', 10]

#rem dup

uniq_elem = []

fl=0
for i in range(0,len(x)):
	if(i == 0):
		uniq_elem.append(x[i])
	else:
		for j in range(0,len(uniq_elem)):
			if(x[i] == uniq_elem[j]):
				fl=1
				break;
		if(fl==0):
			uniq_elem.append(x[i])
		fl=0;


print(uniq_elem)