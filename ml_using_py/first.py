'''
print("My python code")

a=2
b=5
print(a,end="#")
print(a,b,sep="@",end="*")
print("abc")

a,b,c=2,3,4
print(a,b,c,end="33")
print(b,a,sep="56")
print(a,sep="%")

print("hello")
#print("xyz")
'''
"""
a=9
print("a : ",a)
print(type(a))
a=3.4
print("a : ",a)
print(type(a))
a="abc"
print("a : ",a)
print(type(a))

"""
"""
a,b,c=2,3,2
print(a,id(a))
print(b,id(b))
print(c,id(c))
"""
"""
a=5
print(a)
print("a : ",id(a))

"""
"""
a,b=958668567,-957486767876
print(a,type(a))
print(b,type(b))

a,b=95866.8567,-95748.6767876
print(a,type(a))
print(b,type(b))

#a=5+9j
a=complex(3,5)
print(a)
print(type(a))
print(a.real,a.imag)

"""
#string data type
"""
x,y,z,w='abc',"abc",'''abc'''
print(x,type(x))

print(y,type(y))

print(z,type(z))

print(w,type(w))

"""

"""
a="xyz"
print(a,type(a))
print(a[0],a[-3])

print(a[1],a[-2])

print(a[2],a[-1])
"""
"""
a,b="aaa","bbb"
print(a,type(a))
print(b,type(b))
print(a+b)
#print(a-b)
print(a*3)
#print(a/b)
"""


#basic operations on string
"""
a="proGRAmminG lanGUage"
print(a,type(a))

print(a.upper())
print(a.lower())
print(a.capitalize())
print(a.title())

"""
"""
#list

a = [1,2,"abc",True]

#a[start:stop:step]

print(a[0:3:2])
print(a[3:0:-1])
print(a[:])
print(a[2:])
print(a[::-1])

"""

#methods
"""
a=[12,23,"abc",99,True]

a.append(12)
print(a)

a.append([22,"qwerty"])
print(a)

a.insert(2,100)
print(a)

a.insert(-1,"def")
print(a)

a.extend([34,35,36])
print(a)

a.extend("abc")
print(a)

a.extend(["abc"])
print(a)
"""

#othermethods

"""""
a= [22,23,24,23,43,21,65,23,76,44,23,49,80,276,33]
a.remove(23) #removes only first occurence of the element
print(a)

a.pop(2) #removes element on given index
print(a)

a.clear() #clears all elements (empty list)
print(a) 

a= [22,23,24,23,43,21,65,23,76,44,23]

del a[0:5:1]
print(a)

del a[::10]
print(a)

a= [22,23,24,23,43,21,65,23,76,44,23,49,80,276,33]
print(a)

print(a.count(23)) #counts no. of occurence of the given element

print(a.index(24)) #gives the index of the given element

a.reverse()
print(a)

a.sort()
print(a)

a.sort(reverse=True)
print(a)

a = [100,44,54]
b = [120,33,21]
c = a.copy() #copies the given variable (any changes doesn't reflect)

print(a,b,c)

c=a  #copies the given variable (changes reflect)
a.append(12)

print(a,c)

"""











































































