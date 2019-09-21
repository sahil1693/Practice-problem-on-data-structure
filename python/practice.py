'''a=["sahil",1]
print(a)
str1="sahil"
print(str1[:])
print(str1[0:2])
print(str1[0:len(str1)])
print(str1[0::2])
print(str1[0::3])
print(str1.lower())
print(str1.upper())
print(str1.title())
print(str1.isdigit())
print(str1.isalpha())
print(str1.isspace())
print(str1.startswith('s'))
print(str1.endswith('l'))
print(len(str1))
print(str1.count('s'))

b=[1,2,3,4,7,5,6]
print(b[0])
print(b[:])
print(b)
print(b[0:-2])
print(b[0:len(b)])
print(b[::-2])
print(b[::2])'''
class Person(object):
  def __init__(self, name, age):
    self.name = name
    self.age = age

  def myfunc(self):
    print("Hello my name is " + self.name)
  def __it__(self,other):
    return self.age-other.age
p1 = Person("John", 36)
p1.myfunc()


