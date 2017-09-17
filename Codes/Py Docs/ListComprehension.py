squares = [(x ** 2) for x in range(11)]
print range(11)
print squares
print "---" * 20
# squares = []
# for x in range(11):
#     squares.append(x ** 2)

# print squares


""" A list comprehension consists of brackets containing an expression followed by a for clause, then zero or more for or if clauses.
    The result will be a new list resulting from evaluating the expression in the context of the for and if clauses which follow it. 
    If the expression is a tuple (e.g. the (x, y) in the previous example), it must be parenthesized. """

a = [(x, y) for x in [1, 2, 3] for y in [3, 1, 4] if x != y]
print a
print "---" * 20


vec = [-4, -2, 0, 2, 4]
vecp = [abs(x) for x in vec]
print vec
print vecp
print "---" * 20


# Call a method on each element

freshfruit = ['  banana', '  loganberry ', 'passion fruit  ']
res = [x.strip() for x in freshfruit]
print freshfruit
print res
print "---" * 20


arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
arrflatten = [j for i in arr for j in i]
print arr
print arrflatten
print "---" * 20


# List comprehensions can contain complex expressions and nested functions
from math import pi

pis = [str(round(pi, i)) for i in range(1, 6)]
print pis