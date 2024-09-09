arr = input().split(',')

num_slices = 0
curr_value = 0

for x in arr:
    if x == 1:
        curr_value+=1
    else:
        curr_value =0
    num_slices = max(num_slices,curr_value)

print(num_slices)