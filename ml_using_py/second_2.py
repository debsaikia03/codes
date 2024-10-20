"""
a=[2,7,4,5,22,89,12]
print(a)
print(a[1:6:2])
print(a[-6:-1:2])
print(a[5:-11:-2])
print(a[3:7])
"""
"""
a=[3,11,56,67,45,90,"abc"]
print(a)
a.insert(1,100)
print(a)
a.insert(5,[11,67,56])
print(a)
"""
"""
a=[2,8,1]
print(a)
a.insert(-1,200)
print(a)

a.append(100)
print(a)
a.append(True)
print(a)
a.append([56,"qwerty"])
print(a)
"""
"""
a=[22,66,11,99]
print(a)
a.append([11,22,33])
print(a)
a.extend([11,22,33])
print(a)
"""
"""
a=[3,5,6,7]
print(a)
a.append("aabc")
print(a)
a.extend("abc")
print(a)
a.extend(["abc"])
print(a)
"""

#a=[27,33,90,2,34,2,21,2,56,7,2,7,89,7,2]
#print(a)
#del a[0:5:1]
#del a[::14]
#print(a)
#del a
#print(a)
"""
a.clear()
print(a)
"""
"""
a.pop(10)
print(a)
a.pop(1)
print(a)
"""
"""
a.remove(21)
print(a)
a.remove(89)
print(a)
a.remove(2)
print(a)
"""
"""
a=[2,7,4,[22,33,44],78]
print(a)
a[3].insert(2,100)
print(a)
a[3].remove(22)
print(a)
"""

#a=[2,7,4,5,3,9,2,2,2,2,5,7,5,6,1]
#print(a)
#a.reverse()
#a.sort()
#print(a)
#a.sort(reverse=True)
#print(a)
#print(a.count(7))
#print(a.index(2))



a=[11,22]
b=[33,44]
c=a.copy()
print(a,id(a))
print(b,id(b))
print(c,id(c))
a.append(45)
print(a)
print(b)
print(c)































