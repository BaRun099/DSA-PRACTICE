#keyword arguments:
def person(name,age):
    print(name)
    print(age)

person(age=25,name='Subarna')     #when we forget the sequence the argument sequence then use the keyword
#defaault arguments:

def person(name,age=18):
    print(name)
    print(age)

person('Barun',23)

#length argument(when lengh of argument not fixed):

def sum(*q):
    c=0
    for i in q:
        c=c+i

    print(c)

sum(10,12,45,78)

