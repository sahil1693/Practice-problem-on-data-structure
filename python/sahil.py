## for python documentation site is developers.google.com/edu/python/introduction

## Simple Code definition
import sys  #sys is a module and another module is like os, re(os is operating system and re is regular expression)
print('hello world')
x=2
y=4
z='sahil'
print(type(z)) #to check type of a variable is 

##function definition
## def function_name(function argument)
# func(x) if we call a function before its definition then it will give an error
def func(x):
    print(x)
    return 0
func(x)

def func(x,y):
    return x+x+x+x
print(func(x,y)) # if we give an integer and a string as a parmeter and then try to add it will give an error
# multiline comment 
"""
this is a multiline   commenttext = "%d little pigs come out, or I'll %s, and I'll %s, and I'll blow your %s down." % (3, 'huff', 'puff', 'house')
"""

print(len(z)) #it will give length of a string
print(sys.argv[1])  #sys.argv[1] give command line input


# if condition:
	#if true run this line
 # elif condition :
	# some statements
# else:
	#this line

# to start main function
"""
if main():
"""
# to start main function
"""
if __name__ == '__main__':
    print(2)
"""




#String in python
"""
index in String
	h  e  l  l  o
	0  1  2  3  4
       -5 -4 -3 -2 -1
"""
a='sahil'
#to convert a number to String
h='Hello i am '+a+str(93)
print(h)
b=' '
#string method
#s[:] #to print a range of a strnig and first index is included and last index is excluded
#for example print(s[1:4]) //output:ell where s is hello
print(h.lower())
print(h.upper())
print(b.isdigit()) #s.isdigit() function is used to check wheather a number in a string is a digit or not
print(h.isalpha()) # it is used to check wheather all character in a string is alphabet or not
print(b.isspace()) #it is used to check wheater all charcter is white space or not in a string

#other function that work on a string are
"""
startswith('')
endswith('')
find('')
replace('old_value','new_value')
split('delimiter');
s.join(list) //join(['aaa','bbb','ccc'])

"""

#while loop
""""""
num=0
i=0
while i < 10:
	print(i)
	i=i+1
"""
"""
#for loop
""""""
i=0
for i in range (10):
	print(i)
""""""

# List 
a=['sahil','amit','gourav','Bhupinder']
b=[1,2,3,4,5]
print(b[3])

# List Method
"""
append(item) //used to append an item
insert(position , item) used to add an item in a particular position
extend(list1) used to extend a list
index(item) give index of an item in a list
remove(ele) used to remove an element
sort() used to sort an list
reverse() used to reverse an list
pop(index) remove and return index of an element
"""

# sort a list
# 1. used sorted(list) function to sort a list. It return a new list without changing original list

# 2. used sorted(list,reverse=true) to sort in a reverse order


# Tuple - it is like list only difference is that it is immutalbe mean can not change size
#e.g tuple=(1,2,"hi")
#print(len(tuple))


#Dicts it is like map used in c++ or java 
"""
dict={key:value,key:value}
dict={1:'sajo'}
del is used to delete a dict eleme
"""

text = "%d little pigs come out, or I'll %s, and I'll %s, and I'll blow your %s down." % (3, 'huff', 'puff', 'house')
print(text)




#classes in python 

"""
class student():
    def__init__(self,name,ahe): #self mean this function is of this class
        self.id=id
        self.name=name
    def getID(self):
        return self.id
    
s=student(1,"sahil")
print(s.getID())
"""
