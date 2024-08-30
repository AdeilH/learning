# Function Composition

def f(x):
    return x + 2

def g(h, x):
    return h(x) * 2

print(g(f, 2))

# Closure

def addX(x):
    def adder(y):
        return x + y

    return adder

add2 = addX(2)
add3 = addX(3)

print(add2(2), add3(3))

# Currying 

print(addX(2)(2))