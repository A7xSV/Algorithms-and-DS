from collections import deque

q = deque([1, 2, 3, 4])

q.append(5)
q.append(6)
q.popleft()

print q