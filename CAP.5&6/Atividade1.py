x = 10  # variável global

def f():
    print(x)

def g():
    x = 20   # variável local a g
    f()

g()
