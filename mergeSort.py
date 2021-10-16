def merge_sort(a):
    if len(a) == 1:
        return a

    t = len(a) // 2
    arr1 = a[0:t]
    arr2 = a[t:]

    arr1 = merge_sort(arr1)
    arr2 = merge_sort(arr2)

    return merge(arr1, arr2)

def merge(a, b):
    res = []
    x, y = 0, 0

    for i in range(len(a) + len(b)):
        if x < len(a) and y < len(b):
            if a[x] <= b[y]:
                res.append(a[x])
                x += 1
            else:
                res.append(b[y])
                y += 1

        elif x == len(a) or y == len(b):
            if x == len(a):
                while y != len(b):
                    res.append(b[y])
                    y += 1
                break
            else:
                while x != len(a):
                    res.append(a[x])
                    x += 1
                break

    return res


arr = [6, 5, 3, 1, 8, 7, 2, 4]
print(merge_sort([3, 2, 1]))
