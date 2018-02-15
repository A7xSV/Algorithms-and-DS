""" Python also includes a data type for sets. A set is an unordered collection with no duplicate elements. 
    Basic uses include membership testing and eliminating duplicate entries. 
    Set objects also support mathematical operations like union, intersection, difference, and symmetric difference.

    Curly braces or the set() function can be used to create sets. 
    Note: to create an empty set you have to use set(), not {}; the latter creates an empty dictionary, a data structure that we discuss in the next section."""

basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
fruits = set(basket)
print fruits

# Same thing
fruits2 = {'apple', 'orange', 'apple', 'pear', 'orange', 'banana'}

print 'orange' in fruits
print 'cherry' in fruits

a = set('abracadabra')
b = set('alacazam')
print a
print b
# Operations and outputs
print 'a - b :', a - b                              # letters in a but not in b
# set(['r', 'd', 'b'])
print 'a | b :', a | b                              # letters in either a or b
# set(['a', 'c', 'r', 'd', 'b', 'm', 'z', 'l'])
print 'a & b :', a & b                              # letters in both a and b
# set(['a', 'c'])
print 'a ^ b :', a ^ b                              # letters in a or b but not both
# set(['r', 'd', 'b', 'm', 'z', 'l'])

# Set comprehension
a = {x for x in 'abracadabra' if x not in 'abc'}
print a