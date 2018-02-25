# Fibonacci numbers module

def fib(n):
    """Print fibonacci series upto n."""
    a, b = 0, 1
    while a < n:
        print a,
        a, b = b, a + b
    print

def fibr(n):
    """Return fibonacci series upto n."""
    a, b = 0, 1
    result = []
    while a < n:
        result.append(a)
        a, b = b, a + b
    return result

# Make the file usable as a script as well as an importable module, 
# because the code that parses the command line only runs if the module is executed as the "main" file
if __name__ == "__main__":
    import sys
    fib(int(sys.argv[1]))