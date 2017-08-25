words = ['cat', 'window', 'defenestrate']

for w in words[:]: # Sliced copy of the list is useful when some modification is needed.
    if len(w) > 6:
        words.insert(0, w)

print words

for i in range(len(words)):
    print i, words[i]
