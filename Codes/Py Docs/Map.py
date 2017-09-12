# map(function, sequence) calls function(item) for each of the sequence's items and returns a list of the return values. For example, to compute some cubes:

print map(lambda x: (x * x * x), range(1, 11))

""" Without lambda :  
def func(x):
    return (x * x * x)

a = range(1, 11)
print map(func, a) """


# ------------------------------------------------------------------------------------------------------------------------------------------------------------ #
print "---" * 15

# map(function, iterable, ...) more than one iterables passed : 

def add(x, y):
    return x + y

s = range(8)
print s
print s
print map(add, s, s)


# ------------------------------------------------------------------------------------------------------------------------------------------------------------ #
print "---" * 15

# When sequences are of varying lengths
"""More than one sequence may be passed; the function must then have as many arguments as 
   there are sequences and is called with the corresponding item from each sequence (or None if some sequence is shorter than another)"""

def add(x, y):
    if x != None and y != None: # Error on commenting this statement
        return x + y
    # else:
    #     # One or both value is/are None
    #     return "N/A"

s = range(8)
s1 = range(6)

print s
print s1
print map(add, s, s1)