""" Unlike sequences, which are indexed by a range of numbers, dictionaries are indexed by keys, which can be any immutable type; 
    strings and numbers can always be keys. Tuples can be used as keys if they contain only strings, numbers, or tuples; 
    if a tuple contains any mutable object either directly or indirectly, it cannot be used as a key. """

# empty dictionary
e = {}

""" The keys() method of a dictionary object returns a list of all the keys used in the dictionary,
    in arbitrary order (if you want it sorted, just apply the sorted() function to it). 
    To check whether a single key is in the dictionary, use the in keyword. """

tel = {'jack': 4098, 'sape': 4139}
tel['guido'] = 4127
print tel
print tel['jack']

del tel['sape']
print tel

print tel.keys()
print 'guido' in tel
print 4127 in tel 

# The dict() constructor builds dictionaries directly from sequences of key-value pairs:
print dict([('sape', 4139), ('guido', 4127), ('jack', 4098)])

# In addition, dict comprehensions can be used to create dictionaries from arbitrary key and value expressions:
squares = {x : x * x for x in (2, 4, 6)}
print squares

# When the keys are simple strings, it is sometimes easier to specify pairs using keyword arguments:
d = dict(sape = 4139, guido = 4127, jack = 4098)
print d