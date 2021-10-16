def extEu(a, b):
    if b == 0:
        return (1, 0, a)
    x1, y1, d = extEu(b, a % b)
    return (y1, x1 - int((a/b))*y1, d)

print(extEu(27, 6))
