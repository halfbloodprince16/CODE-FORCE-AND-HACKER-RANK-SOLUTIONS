def create_segment_array(array):
	n = len(array)
	array = [0 for x in array] + array
	
	for i in reversed(range(1,n)):
		array[i] = min(array[2*i],array[2*i+1])

	return array

def minimum(array,left,right,length):
	left += length
	right += length
	minim = array[left]

	while left < right:
		if left%2:
			minim = min(minim, array[left])
			left += 1
	
		if right%2:
			right -= 1
			minim = min(minim, array[right])

		left = left/2
		right = right/2

	return minim

def update(array,key,value,length):
	key += length
	array[key] = value

	while key > 1:
		key = key/2
		array[key] = min(array[2*key],array[2*key+1])

	return array

array = [7,15,8,4,3,6,9,11]
length = len(array)
array = create_segment_array(array)
print(array)

print(minimum(array,2,6,length))
array = update(array,2,2,length)
print(minimum(array,2,6,length))