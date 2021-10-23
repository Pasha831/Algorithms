def quickSort(a):
    if len(a) != 0:
        pivot, a_left, a_right = [], [], []
        pivot.append(a.pop())
        for i in range(len(a)):
            if a[i] == pivot[0]:
                pivot.append(a[i])
            if a[i] < pivot[0]:
                a_left.append(a[i])
            if a[i] > pivot[0]:
                a_right.append(a[i])
        return quickSort(a_left) + pivot + quickSort(a_right)
    else:
        return a

def partition(a):
    pivot = a[-1]
    i = 0
    for j in range(len(a) - 2):
        if a[j] <= pivot:
            a[i], a[j] = a[j], a[i]
            i += 1
    a[i], a[len(a) - 1] = a[len(a) - 1], a[i]
    return i


a = [3,7,8,5,2,1,9,5,4]
b = quickSort(a)
print(b)
