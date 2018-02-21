# enumerate()
a = ['tic', 'tac', 'toe']
for i, v in enumerate(a):
    print i, v

seasons = ['Spring', 'Summer', 'Fall', 'Winter']
print list(enumerate(seasons))
print list(enumerate(seasons, start = 1))
print '--' * 40


# To loop over two or more sequences at the same time, the entries can be paired with the zip() function.

questions = ['name', 'quest', 'favorite color']
answers = ['lancelot', 'the holy grail', 'blue']
print zip(questions, answers)
for q, a in zip(questions, answers):
    print 'What is your {0}?  It is {1}.'.format(q, a)
print '--' * 40


# To loop over a sequence in reverse, first specify the sequence in a forward direction and then call the reversed() function.

for i in reversed(xrange(0, 10, 2)):
    print i,
print '\n', '--' * 40


# To loop over a sequence in sorted order, use the sorted() function which returns a new sorted list while leaving the source unaltered.

basket = ['apple', 'orange', 'apple', 'pear', 'orange', 'banana']
for f in sorted(set(basket)):
    print f, 
print '\n', '--' * 40


# When looping through dictionaries, the key and corresponding value can be retrieved at the same time using the iteritems() method.

knights = {'gallahad': 'the pure', 'robin': 'the brave'}
for k, v in knights.iteritems():
    print k, v
print '--' * 40


# It is sometimes tempting to change a list while you are looping over it; however, it is often simpler and safer to create a new list instead.

import math
raw_data = [56.2, float('NaN'), 51.7, 55.3, 52.5, float('NaN'), 47.8]
filtered_data = []

for value in raw_data:
    if not math.isnan(value):
        filtered_data.append(value)

print raw_data
print filtered_data