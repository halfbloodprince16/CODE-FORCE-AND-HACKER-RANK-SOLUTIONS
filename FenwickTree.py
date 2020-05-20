
def create_prefix_list(array):
	array = [0] + array

	for idx in range(1,len(array)):
		idx2 = idx+(idx & -idx)
		if idx2 < len(array):
			array[idx2] += array[idx]

	return array

def prefix_sum(idx):
	res=0;
	while idx:
		res += array[idx];
		idx -= idx & -idx
	return res

def update(array,idx,key):

	while idx<len(array):
		array[idx] += key
		idx += idx & -idx

	return array


array = [1,7,3,0,5,8,3,2,6,2,1,1,4,5] #0 is appended
array = create_prefix_list(array)
print(prefix_sum(13))

array = update(array,4,3)
print(prefix_sum(13))