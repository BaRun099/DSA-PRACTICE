from calendar import c


def greet():
    print("Hello!")
    print("Good Morning")

def add(x,y):
    c=x+y
    return c

greet()
result= add(10,18)
print(result)

#if we want to return two values


def add_sub(x,y):
    c=x+y
    d=x-y
    return c,d

result1,result2 = add_sub(20,15)
print(result1,result2)