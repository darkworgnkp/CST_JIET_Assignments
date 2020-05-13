#For an given array,count the number of subarrays with even number only.

def even(l):
    f = False
    for i in l:
        if i % 2 == 0:
            f = True
        else:
            f = False
            break
    return f

n = int(input("Enter No. of elements:"))
l = []
print("Enter Array:")
for i in range(n):
    l.append(int(input("Enter Elements:")))

print(l)
sub_arr = []
for i in range(0, n):
    for j in range(i, n):
        temp = []
        for k in range(i, j + 1):
            temp += [l[k]]
        sub_arr += [temp]

sub_arr_even = []
sub_arr_even += list(filter(even, sub_arr))

print("Sub Arrays:", sub_arr_even)
print("Total:", len(sub_arr_even))
