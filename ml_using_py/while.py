a=1
while a<10:
    print("abc",a)
    a+=1
print("done")

b=int(input("Enter table number: "))
a=1
while a<=10:
    print(b,"*",a,"=",b*a)
    a+=1
print("done")

a=1
while a<5:
    print("*",end=" ") #sameline
    a+=1
print("\n")

b=1
while b<=4:
    a=b
    while a>0:
        print("*",end=" ")
        a-=1
    print()
    b+=1

print("\n")

b=4
while b>0:
    a=b
    while a>0:
        print("*",end=" ")
        a-=1
    print()
    b-=1