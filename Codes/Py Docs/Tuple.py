# Tuples are immutable

t = 122, 124, 'Hello'
print t
# t[0] = 126 : Error

u = t, 1, 2, 3, 4, 5
print u

a = [1, 2, 3]
b = [5, 7, 8]
c = a, b
print c
a[2] = 4
b[1] = 6
print c

# Empty tuple
e = ()

# Singleton tuple
s = 'Hello',

print e, len(e)
print s, len(s)

# Sequence(Tuple) unpacking
x, y, z = t
# Sequence unpacking requires the list of variables on the left to have the same number of elements as the length of the sequence.
print x
print y
print z
