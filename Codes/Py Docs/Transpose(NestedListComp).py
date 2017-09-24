matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]

print matrix

transposed = [[row[i] for row in matrix] for i in range(4)]
print transposed

# Equivalent to : 

for i in range(4):
    for row in matrix:
        print row[i],
    print ''

# Built-in way :
tr = zip(*matrix) # See Unpacking Argument Lists
# The contents of the matrix are unpacked and the three lists are the three arguments provided to the zip function.
print tr

