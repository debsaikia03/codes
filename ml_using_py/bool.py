a,b=True,False

print(a,type(a))
print(b,type(b))

print("---------AND----------")
print(b and b, b and a, a and b, a and a)
print("---------OR-----------")
print(b or b, b or a, a or b, a or a)
print("---------XOR----------")
print(b ^ b, b ^ a, a ^ b, a ^ a)
print("---------NOT----------")
print(a, not a)

a = 20 #10100
b = 4  #00100

print(a and b) #00100-> 4
print(a or b)  #10100-> 20
print(a ^ b)   
print(not a)

print(bin(a))