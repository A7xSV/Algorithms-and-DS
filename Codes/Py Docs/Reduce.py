""" reduce(function, sequence) returns a single value constructed by calling the binary function function on the first two items of the sequence,
    then on the result and the next item, and so on. For example, to compute the sum of the numbers 1 through 10: """

def add(x, y):
    return x + y

a = range(1, 11)
res = reduce(add, a)
print res
print "---" * 15
# sum(sequence) is built-in. Use that for doing this !

""" If there's only one item in the sequence, its value is returned; if the sequence is empty, an exception is raised.
    A third argument can be passed to indicate the starting value. 
    In this case the starting value is returned for an empty sequence
    and the function is first applied to the starting value and the first sequence item,
    then to the result and the next item, and so on. """

def sum_it(seq):
    def add(x, y):
        return x + y
    return reduce(add, seq, 0) # 0 will be the initial value now

seq1 = [1, 2, 3, 4]
seq2 = []
print sum_it(seq1)
print sum_it(seq2)