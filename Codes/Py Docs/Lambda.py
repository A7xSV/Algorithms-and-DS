def make_incrementer(n):
    """Uses lambda expression to return a function."""
    return lambda x: x + n


print make_incrementer.__doc__
f = make_incrementer(42)
print f(2)


# Pass a small function as an argument
# Sorts based on the strings, pair[0] to sort according to the numbers
pairs = [(1, 'one'), (2, 'two'), (3, 'three'), (4, 'four')]
pairs.sort(key=lambda pair: pair[1])
print pairs