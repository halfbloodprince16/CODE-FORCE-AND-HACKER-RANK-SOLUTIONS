

def sort(arr,n):
	for i in range(1,n):
		t = arr[i]
		j = i-1
		while(j>=0 and len(t)>len(arr[j])):
			arr[j+1] = arr[j]
			j -= 1

		arr[j+1] = t
	return arr


arr = ["i","work","at","Pubmatic"]
n = len(arr)
arr = sort(arr,n)
ss = ""

for i in range(0,len(arr)):
	ss += arr[i]+" "

vow = ["a","e","i","o","u"]

vow_cnt = []

cnt=0;
for i in ss:
	if(i in vow):
		cnt+=1;
	if(i == " "):
		vow_cnt.append(cnt)
		cnt=0


print(ss)
print(vow_cnt)

