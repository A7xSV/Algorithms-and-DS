""" filter(function, iterable)
    filter(function, sequence) returns a sequence consisting of those items from the sequence for which function(item) is true.
    If sequence is a str, unicode or tuple, the result will be of the same type; otherwise, it is always a list. 
    For example, to compute a sequence of numbers divisible by 3 or 5 
"""

def func(x):
    return (x % 3 == 0) or (x % 5 == 0)

f = filter(func, range(2, 22))
print f