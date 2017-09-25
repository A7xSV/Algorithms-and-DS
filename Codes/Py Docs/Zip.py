""" zip()
    This function returns a list of tuples, where the i-th tuple contains the i-th element from each of the argument sequences or iterables.
    The returned list is truncated in length to the length of the shortest argument sequence. """

x = [1, 2, 3, 4]
y = [5, 6, 7, 8]
print x
print y

zipped = zip(x, y)
print zipped

# Unzip
x2, y2 = zip(*zipped)
print x2
print y2

print (x == list(x2)) and (y == list(y2))