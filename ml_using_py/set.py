#set: collection of immuatble type of data, unique, mutable,pnly covered by {}, stores direct data,unindexed

a={8,25,True,2+3j,(2,4,5),True}
print(a)
print(type(a))

#or

a=set({8,25,True,2+3j,(2,4,5),True})

#union
#intersection
#difference
#symmetric

a={1,2,3,4}
b={3,4,5,6}

print(a)
print(b)
print(a.union(b))
print(a.intersection(b))
print(a-b)
print(a.symmetric_difference(b))

print(a.difference(b))
print(a.difference_update(b)) #removes the items that exists in both sets

#insertion and deletion 

c={1,3,4,3}
c.add(23) #adds only one element
print(c)

c.add((44,48,11)) #adds as a tuple
print(c)

c.update((22,54)) #adds more than one element
print(c)

c.pop() #removes random element

c.remove(4) #removes specific element
c.discard(33) #same as remove but doesnt generate error if element not present
print(c)

del a #deletes whole set

print("\n---------------------")
#difference_differenceupdate

a={1,2,3,4}
b={3,4,5,6}

print(a)
print(b)

a.difference_update(b) 

print(a) #a: {1,2}
print(b) #b: {3,4,5,6}

