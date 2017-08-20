def fib(n):
    """ Print and return Fibonacci series upto n (Doc string) """
    a, b = 0, 1
    result = []

    while a < n:
        print a,
        result.append(a)
        a, b = b, a + b
        result 
    
    return result

f100 = fib(100)