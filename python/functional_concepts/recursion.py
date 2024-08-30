
def fibonnaci(n: int):
    if n == 0:
        return n
    else:
        return n + fibonnaci(n-1)

print(fibonnaci(10))

# Tail Call Recursion 
# Call to some function g at end of f

def fibonnaci2(n: int, acc = 0):
    if n == 0:
        return acc
    else:
        return fibonnaci2(n-1, acc + n)

print(fibonnaci2(10, 0))
# https://usrsb.in/Bouncing-Python-s-Generators-With-A-Trampoline.html
import types
def tramp(gen, *args, **kwargs):
    g = gen(*args, **kwargs)
    while isinstance(g, types.GeneratorType):
        g = next(g)
    return g

def fibonnaciYield(n: int, curr = 0, next = 1):
    if n == 0:
        yield curr
    else:
        yield fibonnaciYield(n - 1, next, curr + next)

print([tramp(fibonnaciYield,i) for i in range(1000)])